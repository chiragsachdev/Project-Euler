#include <iostream>
#include <math.h>
using namespace std;
// n = 600_851_475_143

bool ft_isPrime(int n)
{
	int i;

	for(i = 2; i < int(sqrt(n)); i++)
	{
		if (n % i == 0)
			return (false);
	}
	return (true);
}

int main()
{
	int i, max_prime;
	long int n;

	n = 600851475143;
	max_prime = 1;
	i = int(sqrt(n)) + 1;
	while (i > 1)
	{
		if (n % i == 0)
		{
			if (ft_isPrime(i) == true)
			{
				max_prime = i;
				break;
			}
		}
		i--;
	}

	cout << max_prime << endl;
	return (0);
}