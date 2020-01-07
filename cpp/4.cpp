#include <iostream>
using namespace std;

bool ft_isPalindrome(int n)
{
	int rev, num, r;

	num = n;
	rev = 0;
	while(n > 0)
	{
		r = n % 10;
		rev = rev*10 + r;
		n /= 10;
	}

	return (rev == num);
}

int main()
{
	int m,n, pdt, result;

	result = 0;

	for (m = 100; m < 1000; m++)
	{
		for (n = 100; n < 1000; n++)
		{
			pdt = m * n;
			if (ft_isPalindrome(pdt))
			{
				if (pdt > result)
					result = pdt;
			}
		}
	}

	cout << result << endl;
	return (0);
}