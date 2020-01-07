#!/usr/bin/python3

def ft_isPalindrome(n):	return (True if str(n) == str(n)[::-1] else False)

pdt = 0
largest_palindrome = 0

for n in range(100,1000):
	for m in range(100,1000):
		pdt = m * n

		if (ft_isPalindrome(pdt)):
			if (pdt > largest_palindrome):
				largest_palindrome = pdt

print(largest_palindrome)