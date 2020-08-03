#include <iostream>
using namespace std;

int main()
{
	int n , sum_squares, square_sum;
	
	n = 100;
	sum_squares = n * (n + 1) * (2 * n + 1) / 6;
	square_sum = (n * (n + 1) / 2) * (n * (n + 1) / 2) ;
	cout << square_sum - sum_squares << endl;
}