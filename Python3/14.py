#!/usr/bin/python3
i = 1
term = 0
ctr = 0
result = [0,0]

while (i < 1_000_000):
	term = i
	ctr = 0
	while (term != 1):
		ctr += 1
		if (term % 2 == 0):
			term /= 2
		else:
			term = 3 * term + 1
	if ctr > result[0]:
		result[0] = ctr
		result[1] = i
	i += 1

print(result[1])