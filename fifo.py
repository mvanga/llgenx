#!/usr/bin/python

nonterminals = {}
nonterminal_id = {}

with open("grammar") as f:
	content = f.readlines()

count = 0
for line in content:
	if line[-3:] == "->\n":
		nonterminals[line.split(' ', 1)[0]] = []
		nonterminal_id[count] = line.split(' ', 1)[0]
		count = count + 1

terminals = []
current = ""
for line in content:
	if line[-3:] == "->\n":
		current = line.split(' ', 1)[0]
	elif line[0] == '\t':
		words = line.strip().split(' ')
		for w in words:
			if nonterminals.get(w) == None and w not in terminals:
				terminals.append(w)
		nonterminals[current].append(line.strip().split(' '))

def first_set(nt):
	l = []
	ret = False
	if nt not in nonterminals:
		return [nt], ret
	for rule in nonterminals.get(nt):
		if (rule[0] in terminals):
			if rule[0] == "EPSILON":
				ret = True
			else:
				l = l + [rule[0]]
		else:
			l = l + first_set(rule[0])[0]
	return list(set(l)), ret

def follow_set(nt):
	l = []
	if nt not in nonterminals:
		return [nt]
	#print "FOLLOW(" + nt + ")"
	for cnt in nonterminals.keys():
		for rule in nonterminals[cnt]:
			if nt in rule and nt != cnt:
				if rule.index(nt) == len(rule) - 1:
					#print "    In " + cnt + " at the end"
					if ["EPSILON"] in nonterminals[cnt]:
						#print "    adding follow(" + cnt + ") to follow(" + nt + ")"
						l = l + follow(cnt)
					else:
						#print "    adding first(" + cnt + ") to follow(" + nt + ")"
						l = l + first_set(cnt)[0]
				else:
					w = rule[rule.index(nt) + 1]
					#print "    In " + cnt + " followed by " + rule[rule.index(nt) + 1]
					fs, r = first_set(w)
					l = l + fs
	return l

def lookahead(nt):
	fi = []
	fo = []
	fi, need_follow = first_set(nt)
	if need_follow == True:
		fo = follow_set(nt)
	return list(set(fi + fo))

def check_lookahead(fsets):
	return True

def gen_rule(nt, rule_num, rule):
	if rule[0] == "EPSILON":
		return False

	pre = '\tif'
	# Print the lookahead check for this rule
	if rule_num != 0:
		pre = 'else if'
	if rule[0] in terminals:
		if rule[0] == 'identifier' or rule[0] == 'constant' or rule[0] == 'string-literal':
			print pre + ' (lookahead.token_type == "' + rule[0] + '") {'
		else:
			print pre + ' (lookahead.token == "' + rule[0] + '") {'
	else:
		print pre + ' (check_lookahead("' + rule[0] + '")) {'
	# Print the actual rule
	for w in rule:
		if nonterminals.get(w) != None:
			print '\t\t' + w.replace('-', '_') + '();'
		else:
			if w == "string-literal" or w == "identifier" or w == "constant":
				print '\t\t' + 'match_token_type("' + w + '");'
			else:
				print '\t\t' + 'match_token("' + w + '");'
	print "\t}",

	return True

def gen_recdesc_func(nt, lookahead_sets):
	#print "void Parser::" + nt.replace('-', '_') + "()\n{\n\tASTNode *tree;\n"
	print "void Parser::" + nt.replace('-', '_') + "()\n{"
	print '\tdebug << "' + nt.replace('-', '_') + ': " << lookahead.token << "   " << lookahead.token_type << "\\n"; fflush(0);'
	ret = False
	for (rule_num, rule) in enumerate(nonterminals.get(nt)):
		ret = gen_rule(nt, rule_num, rule)
	if ret == True:
		print 'else {\n\t\terrorf("\t\t\t\t\t\tUnexpected token");\n\t}',
	#print "\n\n\treturn tree;\n}\n"
	print "\n}\n"

def gen_recdesc_init_func(nt, lookahead_sets):
	for rule in nonterminals.get(nt):
		if nonterminals.get(rule[0]) != None:
			lalist = lookahead_sets[rule[0]]
			for la in lalist:
				print '\tlookaheads["' + nt + '"].push_back("' + la +  '");'
		else:
			if rule[0] != "EPSILON":
				print '\tlookaheads["' + nt + '"].push_back("' + rule[0] +  '");'
	print ""

def dump_grammar():
	for nt in nonterminals.keys():
		print nt + ' -> ',
		for rule in nonterminals[nt]:
			print ' '.join('{0}'.format(w) for w in rule),
			if rule != nonterminals[nt][-1]:
				print ' | ',
		print ""

def dump_headers():
	print '#include "parser.h"'
	print ''
	print '#define debug cout'
	print '//#define debug //'
	print ''

def dump_lookahead_init_func():
	lookahead_sets = {}
	for nt in nonterminals.keys():
		lookahead_sets[nt] = lookahead(nt)

	print "void Parser::lookaheads_init(void)\n{"
	for i in range(0, count):
		nt = nonterminal_id[i]
		gen_recdesc_init_func(nt, lookahead_sets)
	print "}\n"

def dump_rd_parser_rules():
	lookahead_sets = {}
	for nt in nonterminals.keys():
		lookahead_sets[nt] = lookahead(nt)

	for i in range(0, count):
		nt = nonterminal_id[i]
		gen_recdesc_func(nt, lookahead_sets)

if __name__ == '__main__':
	dump_headers()
	dump_lookahead_init_func()
	dump_rd_parser_rules()
