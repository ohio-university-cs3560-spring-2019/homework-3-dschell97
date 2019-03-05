/*
	Program:	stdde vaiadic calc

	name:		Daniel Schell
	email:		ds008016@ohio.edu


	Description:	this is the implementation of the variadic stddev

	date:		4 March 19
*/

#include <cmath>
#include <cstdarg>

#include "hw7.h"

double stddev(int n, ...)
{	//declaring variables for the calc
	double sum = 0;
	double mean = 0;
	double vari = 0;

	//declaring the variadic part of the function and starting it
	va_list args;
	va_start(args, n);

	//for loop to run a sum total
	for(size_t i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	//ending current variadic
	va_end(args);

	//using sum to calc the mean 
	mean = (sum/n);
	
	//sarting variadic again
	va_start(args, n);
	//for loop to get the sum of the squares for variance
	for(size_t i = 0; i < n; i++)
	{
		int n = va_arg(args, int);
		vari += ((n - mean)*(n-mean));
	}
	//final ending for variadic
	va_end(args);
	//final calc for the stddev
	return (sqrt(vari) /(n+1));
}
