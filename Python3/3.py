#!/usr/bin/python3

import math

def ft_isPrime(n):
	for i in range(2,int(math.sqrt(n))):
		if (n % i == 0):
			return False
		
	return True

n = 600_851_475_143
max_prime = 1
for i in range(int(math.sqrt(n)) + 1,1,-1):
	if n % i == 0:
		if ft_isPrime(i):
			max_prime = i
			break

print(max_prime)