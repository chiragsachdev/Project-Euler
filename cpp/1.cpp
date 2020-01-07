#include <iostream>
using namespace std;

int main()
{
	int i;
	int sum;

	sum = 0;
	i = -1;

	while (++i < 1000)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	cout << sum << endl;

}