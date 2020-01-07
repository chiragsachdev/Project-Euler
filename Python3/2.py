#!/usr/bin/python3
sum_ = 2
a = 1
b = 2
c = a + b
while (c < 4_000_000):
	if c % 2 == 0:
		sum_ += c
	a, b = b, c
	c = a + b
print(sum_)