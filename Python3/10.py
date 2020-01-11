#!/usr/bin/python3

def ft_isPrime(n):
	for i in range(2,int(n**0.5 +1)):
		if n % i == 0:
			return (False)
	return (True)

result = sum([i for i in range(2,2_000_000) if ft_isPrime(i)])
print(result)