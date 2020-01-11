#include <iostream>
#include <math.h> 
using namespace std;

bool ft_isPrime(int n)
{
	int i;

	for (i = 2; i < int(sqrt(n) + 1); i++)
	{
		if (n % i == 0)
			return (false);
	}
	return (true);
}

int main()
{
	int i;
	long int sum;

	sum = 0;
	for (i = 2; i < 2000000; i++)
		sum += ft_isPrime(i) ? i : 0;
	cout << sum << endl;

	return(0);
}