#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	bool flag;

	flag = false;

	for (i = 1; i < 1000; i++)
	{
		for (j = 1; j < 1000 - i; j++)
		{
			k = 1000 - i - j;
			if (i * i + j * j == k * k)
			{
				flag = true;
				cout << i * j * k << endl;
				break;
			}
		}
		if (flag)
			break;
	}

	return (0);
}