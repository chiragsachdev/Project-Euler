/*
 * Created Date: Saturday, August 1st 2020, 11:37:52 am
 * Author: Chirag Sachdev
 * LinkedIn: https://www.linkedin.com/in/chiragsachdev/
 * Github: https://github.com/chiragsachdev/
 */

#include <iostream>
using namespace std;

int ft_get_units_len(int n)
{
	switch (n)
	{
		case (1):	cout << "one";		return(3);

		case (2):	cout << "two";		return(3);

		case (3):	cout << "three";	return(5);

		case (4):	cout << "four";		return(4);

		case (5):	cout << "five";		return(4);

		case (6):	cout << "six";		return(3);

		case (7):	cout << "seven";	return(5);

		case (8):	cout << "eight";	return(5);

		case (9):	cout << "nine";		return(4);

		case (0):	cout << "";			return(0);
	};
	return (0);
}

int ft_get_teens_len(int n)
{
	switch (n)
	{
		case (1):	cout << "eleven";		return(6);

		case (2):	cout << "twelve";		return(6);

		case (3):	cout << "thirteen";		return(8);

		case (4):	cout << "fourteen";		return(8);

		case (5):	cout << "fifteen";		return(7);

		case (6):	cout << "sixteen";		return(7);

		case (7):	cout << "seventeen";	return(9);

		case (8):	cout << "eighteen";		return(8);

		case (9):	cout << "nineteen";		return(8);

		case (0):	cout << "ten";			return(3);
	};
	return(0);
}

int ft_get_tens_len(int n)
{
	switch (n)
	{
		case (1):	cout << "";				return(0);

		case (2):	cout << "twenty";		return(6);

		case (3):	cout << "thirty";		return(6);

		case (4):	cout << "forty";		return(5);

		case (5):	cout << "fifty";		return(5);

		case (6):	cout << "sixty";		return(5);

		case (7):	cout << "seventy";		return(7);

		case (8):	cout << "eighty";		return(6);

		case (9):	cout << "ninety";		return(6);

		case (0):	cout << "";				return(0);
	};
	return(0);
}

int ft_get_hundreds_len(int n)
{
	switch (n)
	{
		case (1):	cout << "one hundred";		return(10);

		case (2):	cout << "two hundred";		return(10);

		case (3):	cout << "three hundred";	return(12);

		case (4):	cout << "four hundred";		return(11);

		case (5):	cout << "five hundred";		return(11);

		case (6):	cout << "six hundred";		return(10);

		case (7):	cout << "seven hundred";	return(12);

		case (8):	cout << "eight hundred";	return(12);

		case (9):	cout << "nine hundred";		return(11);

		case (0):	cout << "";					return(0);
	};
	return(0);
}

int ft_get_number_name(int num)
{
	int n;
	int u;
	int t;
	int h;
	int th;
	int ctr;

	n = num;
	u = n % 10;
	n /= 10;
	t = n % 10;
	n /= 10;
	h = n % 10;
	th = n / 10;
	ctr = 0;

	cout << num << " ";

	if (th > 0)
	{
		cout << "one thousand";
		ctr += 11;
	}
	if (h > 0)
	{
		ctr +=  ft_get_hundreds_len(h);
	}
	if (t > 1)
	{	
		if ((h > 0) || (th > 0))
		{
			cout << " and ";
			ctr += 3;
		}
		ctr += ft_get_tens_len(t);
	}
	if (t == 1)
	{
		if ((h > 0) || (th > 0))
		{
			cout << " and ";
			ctr += 3;
		}
		ctr += ft_get_teens_len(u);
	}
	if ((u > 0) && (t != 1))
	{
		if (((h > 0) || (th > 0)) && (t == 0))
		{
			cout << " and";
			ctr += 3;
		}
		cout << ' ';
		ctr += ft_get_units_len(u);
	}
	cout << " " << ctr << endl;
	return (ctr);
}

int main()
{
	int total;

	total = 0;
	for (int i= 1; i <= 1000; i++)
		total += ft_get_number_name(i);

	cout << total << endl;

	return (0);
}