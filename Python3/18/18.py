#!/usr/bin/env python3
#==============================================================================#
# Created Date: Saturday, August 1st 2020, 1:08:15 pm                          #
# Author: Chirag Sachdev                                                       #
# LinkedIn: https://www.linkedin.com/in/chiragsachdev/                         #
# Github: https://github.com/chiragsachdev/                                    #
#==============================================================================#


with open('./Python3/18/triangle.txt','r') as fp:
	data = fp.read().split('\n')
data = [i.split() for i in data]
data = [[int(j) for j in i] for i in data]
n = len(data)

# # greedy solution
# total = 0
# row_cnt = len(data)
# j = 0
# for i in range(row_cnt - 1):
# 	total += data[i][j]
# 	print(data[i][j], total)
# 	if data[i+1][j] < data[i+1][j+1]:
# 		j = j +1
	
# total += data[-1][j]
# print(data[-1][j], total)

# bottom up dynamic programming approach
for i in range(n - 2, -1, -1):
	for j in range(len(data[i])):
		data[i][j] += max(data[i + 1][j], data[i + 1][j + 1])

print(data[0][0])
