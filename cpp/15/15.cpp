#include <iostream>
using namespace std;

long double ft_factorial(int n)
{
	long double fact;

	fact = 1;
	while (n > 0)
		fact *= n--;
	return (fact);
}

unsigned long long int ft_combination(int n, int r)
{

	return ((unsigned long long int )((ft_factorial(n) / ft_factorial(r)) / ft_factorial(n - r)));
}

int main()
{
	cout << (ft_combination(40,20)) << endl;
	return (0);
}



// Solution using recursive backtracking and bruteforce
/*
typedef struct node
{
	int right;
	int down;
} node;

node **ft_create_lattice(void);
void ft_travel(node **, int, int);

unsigned long int ctr;
const int sides = 20;

int main()
{
	node **lattice;

	lattice = ft_create_lattice();
	ft_travel(lattice,0,0);
	cout << ctr << endl;

	return (0);
}

node **ft_create_lattice()
{
	node **lattice;
	int size;

	size = sides;
	lattice = (node **)(malloc(sizeof(node *) * (size + 1)));
	for (int i = 0; i < size + 1; i++)
	{
		lattice[i] = (node *)(malloc(sizeof(node) * (size + 1)));
	}

	for (int i = 0;i < size; i++)
	{
		for (int j = 0;j < size; j++)
		{
			lattice[i][j].down = i + 1;
			lattice[i][j].right = j + 1;
		}
		// rightmost column
		lattice[i][size].down = i + 1;
		lattice[i][size].right = -1;

		// bottommost row
		lattice[size][i].down = -1;
		lattice[size][i].right = i + 1;
	}

	// bottom right element
	lattice[size][size].down = -1;
	lattice[size][size].right = -1;
	
	return lattice;

}

void ft_travel(node **lattice, int i, int j)
{
	int size;

	size = sides;
	if ((i == size) && (j < size))
		ft_travel(lattice,i,lattice[i][j].right);
	else if ((i < size) && (j == size))
		ft_travel(lattice,lattice[i][j].down,j);
	else if ((i == size) && (j == size))
		{
			ctr++;
			cout << ctr << endl;
			return;
		}
	else
	{
		for (int x = 0; x < 2; x++)
			if ((x == 0) && (lattice[i][j].right != -1))
				ft_travel(lattice,i,lattice[i][j].right);
			else if ((x == 1) && (lattice[i][j].down != -1))
				ft_travel(lattice,lattice[i][j].down,j);	
	}

}
*/
