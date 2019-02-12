/*
	Daniel Schell
	ds008016@ohio.edu

	description: main for hw3

	11 February 2019
*/

#include <iostream>

double deviation( int* a, int n);

int main()
{
	int a[4] = {1,2,3,4};

	std::cout << deviation(a,4) << std::endl;

	return 0;
}
