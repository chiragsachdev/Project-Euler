#include <iostream>
using namespace std;

int main()
{
	unsigned int i, ctr, term;
	unsigned int result[2] = {0,0};

	i = 0;
	term = 0;
	ctr = 0;
	while (++i < 1000000)
	{
		ctr = 0;
		term = i;
		while (term != 1)
		{
			ctr++;
			if (term % 2 == 0)
				term /= 2;
			else
				term = 3 * term + 1;
			
		}
		if (ctr >= result[0])
		{
			result[0] = ctr;
			result[1] = i;
		}
	}

	cout << result[1] << endl;

	return (0);
}
