#!/usr/bin/python3

def ft_getGCD(a,b):
	gcd = 1
	for i in range(1,min(a,b)+1):
		if ((a % i == 0) and (b % i == 0)):
			gcd = i
	return (gcd)

result = 1
for i in range(1,21):
	if not result % i == 0:
		result = int(result * i / ft_getGCD(result,i))
	
print(result)