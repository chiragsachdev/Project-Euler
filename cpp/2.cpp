#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int sum;

	a = 1;
	b = 2;
	c = a + b;
	sum = 2;
	while (c < 4000000)
	{
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
		c = a + b;
	}

	cout << sum << endl;
	
	return (0);
}