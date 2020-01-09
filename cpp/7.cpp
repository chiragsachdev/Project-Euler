#include <iostream>
#include <math.h>
using namespace std;

bool ft_isPrime(int n)
{
	int i;

	for (i = 2; i < sqrt(n) + 1; i++)
	{
		if (n % i == 0)
			return (false);
	}

	return (true);
}

int main()
{
	int ctr, i;

	ctr = 0;
	i = 1;

	while(true)
	{
		i++;
		if (ft_isPrime(i))
		{
			ctr++;

			if (ctr == 10001)
			{
				cout << i << endl;
				break;
			}
		}
	}

	return (0);
}