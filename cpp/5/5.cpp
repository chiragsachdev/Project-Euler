#include <iostream>
using namespace std;

int ft_getGCD(int a, int b)
{
	int min, i, gcd;

	min = a < b ? a : b;
	for (i = 1; i <= min; i++)
	{
		if ((a % i == 0) && (b % i == 0))
			gcd = i;
	}
	return (gcd);
}

int main()
{
	int i, result;

	result = 1;
	for (i = 1; i < 21; i++)
		if (result % i != 0)
			result = result * i / ft_getGCD(result, i);

	cout << result << endl;

	return (0);
}