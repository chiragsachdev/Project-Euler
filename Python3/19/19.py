#!/usr/bin/env python3
#==============================================================================#
# Created Date: Sunday, August 2nd 2020, 5:51:13 pm                            #
# Author: Chirag Sachdev                                                       #
# LinkedIn: https://www.linkedin.com/in/chiragsachdev/                         #
# Github: https://github.com/chiragsachdev/                                    #
#==============================================================================#


mapper = {
	1:31,
	2:28,
	3:31,
	4:30,
	5:31,
	6:30,
	7:31,
	8:31,
	9:30,
	10:31,
	11:30,
	12:31
}

days = [
	'monday',
	'tuesday',
	'wednesday',
	'thursday',
	'friday',
	'saturday',
	'sunday'
]

ctr = 0
total = 0
curr = 1
for year in range(1901,2001):
	for month in range(1,13):
		if (year % 4 == 0) and month == 2:
			n_days = 29
		else:
			n_days = mapper[month]
		curr = curr + (n_days - 28)
		if curr > 6:
			curr = curr % 7
		if curr == 6:
			ctr += 1
print(ctr)
