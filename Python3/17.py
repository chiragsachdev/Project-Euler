#!/usr/bin/env python3
#==============================================================================#
# Created Date: Wednesday, June 24th 2020, 8:46:23 pm                          #
# Author: Chirag Sachdev                                                       #
# LinkedIn: https://www.linkedin.com/in/chiragsachdev/                         #
# Github: https://github.com/chiragsachdev/                                    #
#==============================================================================#

def ft_get_number_name(num):
	n = num
	ctr = 0
	name = ''
	units = {
		1 : 'one',
		2 : 'two',
		3 : 'three',
		4 : 'four',
		5 : 'five',
		6 : 'six',
		7 : 'seven',
		8 : 'eight',
		9 : 'nine',
		0 : ''
	}
	tens = {
		2 : 'twenty',
		3 : 'thirty',
		4 : 'forty',
		5 : 'fifty',
		6 : 'sixty',
		7 : 'seventy',
		8 : 'eighty',
		9 : 'ninety'
	}
	teens = {
		1 : 'eleven',
		2 : 'twelve',
		3 : 'thirteen',
		4 : 'fourteen',
		5 : 'fifteen',
		6 : 'sixteen',
		7 : 'seventeen',
		8 : 'eighteen',
		9 : 'nineteen',
		0 : 'ten'

	}
	u = n % 10
	n = n // 10
	t = n % 10
	n = n // 10
	h = n % 10
	th = n // 10

	if th > 0:
		name = 'one thousand'
		ctr += 11
		# print(ctr)
	if h > 0:
		name += ' ' + units[h] + ' ' + 'hundred'
		ctr += len(units[h]) + 7
		# print(ctr)
	if t > 1:
		if ((h > 0) or (th > 0)):
			name += ' and '
			ctr += 3
		name += tens[t]
		ctr += len(tens[t])
		# print(ctr)
	if t == 1:
		if ((h > 0) or (th > 0)):
			name += ' and '
			ctr += 3
		name += teens[u]
		ctr += len(teens[u])
		# print(ctr)
	if (u > 0) and (not (t == 1)):
		if ((h > 0) or (th > 0)) and (t == 0):
			name += ' and'
			ctr += 3
		name += ' ' + units[u]
		ctr += len(units[u])
		# print(ctr
	
	print(num, name, ctr)
	return (ctr)

total = 0
for i in range(1,1001):
	total += ft_get_number_name(i)
print(total)
# print(ft_get_number_name(342))