#include <iostream>
#include <math.h>
using namespace std;

int ft_getFactorCount(int n)
{
	int range, i, ctr;

	i = 0;
	ctr = 0;
	range = int(sqrt(n));

	while (++i <= range)
	{
		if (n % i == 0)
			ctr += 2;
	}

	if (range * range == n)
		ctr -= 1;

	return (ctr);
}


int main()
{
	int i, ctr, triangle;
	
	triangle = 0;
	i = 1;
	ctr = 0;

	while(true)
	{
		triangle += i++;
		ctr = ft_getFactorCount(triangle);
		if (ctr >= 500)
			break; 
	}

	cout << triangle << endl;

	return (0);
}