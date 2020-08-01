#!/usr/bin/python3

def ft_factorial(n):
	if n == 1:
		return (1)
	return (n * ft_factorial(n - 1))

def ft_combination(n,r):
	return (ft_factorial(n) // (ft_factorial(r) * ft_factorial(n - r)))

print(ft_combination(40,20))

# Solution using recursive backtracking and bruteforce
'''
def travel(lattice, i, j):
	# _ = input()
	global ctr
	global size
	if i == size and j < size:
		# print('right',end=' ')
		travel(lattice,i,lattice[i][j]['right'])
	elif i < size and j == size:
		# print('down',end=' ')
		travel(lattice,lattice[i][j]['down'],j)
	elif i == size and j == size:
		# print('destination')
		ctr += 1
		print(ctr)
		return
	else:
		for move in moves:
			# print(move,end=' ')
			if move == 'right' and not lattice[i][j]['right'] == None:
				travel(lattice,i,lattice[i][j]['right'])
			elif move == 'down' and not lattice[i][j]['down'] == None:
				travel(lattice,lattice[i][j]['down'],j)	
				

size = 20
lattice = [[None for _ in range(size+1)] for _ in range(size+1)]
moves = ['right','down']
ctr = 0
for i in range(size):
	for j in range(size):
		lattice[i][j] = {"right":j + 1,'down': i + 1}
	lattice[i][size] = {'right':None,'down': i + 1}
	lattice[size][i] = {'right':i+1,'down': None}
lattice[size][size] = {'right':None,'down': None}

travel(lattice,0,0)
print(ctr)
'''