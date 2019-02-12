/*
	Daniel Schell
	ds008016@ohio.edu

	description: declares a vector and calc stdev  for the set

	11 February 2019
*/

#include <iostream>
#include <vector>
#include <cmath>

/**
	\file
*	\brief Finds the standard deviation for set
*	\param a Variable name of array
*	\param n Variable name for individual elements 
*	\return Returns the standard deviation
*/

double deviation(int* a, int n )
{
	//declares a variable sum
	int sum = 0;

	//for loop to calc sum
	for(size_t i = 0; i <= n - 1; i++)
	{
		sum += a[i];
	}

	//calcs the mean of the set and declares it as a variable
	double mean = sum/=(n-1);
	//declares stdev variable 
	double stdev = 0;

	//for loop to calc the std root value
	for(size_t i = 0; i <= n - 2; i++)
	{
		stdev += (a[i] - mean) * (a[i] - mean);
	}
	//stdev is divided by number of numbers in array
	stdev /= (n-1);

	//fixes the standard deviation is zero error
	if(stdev == 0)
	{
		std::cout << "Sigma is zero." << std::endl;
	}

	//return root of the stdev to give variance
	return sqrt(stdev);

}
