#!/usr/bin/python3

def ft_get_factors(n):
	ctr = 0
	range_ = int(n**0.5)
	for i in range(1,range_ + 1):
		if (n % i == 0):
			ctr += 2
	if range_**2 == n:
		ctr -= 1
	return (ctr)

ctr = 0
i = 1
triangle = 0
while (True):
	triangle += i
	ctr = ft_get_factors(triangle)
	if ctr >= 500:
		break
	i += 1

print(triangle)