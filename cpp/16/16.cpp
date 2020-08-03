#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long double n = 1;
	int sum = 0;

	for (int i = 0; i < 1000; i++)
		n *= 2;
	while (n > 0)
	{
		sum +=  (n - (round(n / 10) * 10));
		n = round(n / 10);
	}

	cout << sum << endl;

	return (0);
}
