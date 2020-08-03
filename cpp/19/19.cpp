/*
 * Created Date: Sunday, August 2nd 2020, 7:17:10 pm
 * Author: Chirag Sachdev
 * LinkedIn: https://www.linkedin.com/in/chiragsachdev/
 * Github: https://github.com/chiragsachdev/
 */


#include <iostream>
using namespace std;

int main()
{
	int ctr;
	int curr;
	int year;
	int month;
	int n_days;

	curr = 1;
	ctr = 0;
	for (year = 1901; year <= 2000; year++)
	{
		for (month = 1; month <= 12; month++)
		{
			if ((year % 4 == 0) && (month == 2))
				n_days = 29;
			else
			{
				switch (month)
				{
					case (1):	n_days = 31;	break;
					case (2):	n_days = 28;	break;
					case (3):	n_days = 31;	break;
					case (4):	n_days = 30;	break;
					case (5):	n_days = 31;	break;
					case (6):	n_days = 30;	break;
					case (7):	n_days = 31;	break;
					case (8):	n_days = 31;	break;
					case (9):	n_days = 30;	break;
					case (10):	n_days = 31;	break;
					case (11):	n_days = 30;	break;
					case (12):	n_days = 31;	break;
				}
			}
			curr = curr + (n_days - 28);
			if (curr > 6)
				curr %= 7;
			if (curr == 6)
				ctr++;			
		}
	}

	cout << ctr << endl;
	return (0);
}
