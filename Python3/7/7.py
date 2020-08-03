#!/usr/bin/python3

def ft_isPrime(n):
	for i in range(2,int(n**0.5) + 1):
		if n % i == 0:
			return (False)
	return (True)

ctr = 0
i = 1
while(True):
	i += 1
	if ft_isPrime(i):
		ctr += 1
		if ctr == 10001:
			print(i)
			break
	