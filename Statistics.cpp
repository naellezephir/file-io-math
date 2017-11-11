#include <iostream>
#include <iomanip>
#include <algorithm>
#include "Statistics.h"

using namespace std;

//finding the mean
float getMean(int myArray[], int size)
{
	float mean;
	static float adding;
	float total;

	for (int i = 0; i < size; i++)
	{
		adding = float(myArray[i]);
		total = total + adding;
	}
	
	if (size == 0)
	{
		cout << "File is empty, no calculations" << endl;
		return 0;
	}
	
	
	mean = total / size;

	cout << fixed << setprecision(2);	
	cout << "Mean is: " << 	mean << endl;
	
	return mean;
}

//finding the min
double min(double a, double b)
{
	if (a < b){
		return a;
	}
	else{
		return b;
	}
}

//sqrt function
double sqrt(double N, double tol)
{
	double guess = N - 1;	
	if (N == 0)
	{
		return 0;
	}
	while (true)
	{
		if (abs ((guess - N / guess) / min(guess, N / guess) <= tol))
		{
			break;
		}
	guess = (guess + N / guess) / 2;
	}

	return guess;
}

//stabdard deviation
float getStDev(int myArray[], int size, float mean)
{
	float stDev = 0.0;
	float resultarray[size];
	double tol = 1e-6;
	float answer;

	if(size == 0)
	{
		cout << "File is empty, no calculations" << endl;
		return 0;
	}

	for (int i = 0; i < size; i++)
	{
		resultarray[i] = (myArray[i] - mean) * (myArray[i] - mean) ;
		stDev = stDev + resultarray[i];
	}
	
	double operand = (1.0 / size) * stDev;
	answer = sqrt(operand, tol);
	
	cout << fixed << setprecision(2);	
	cout << "StDev: " << answer << endl;

}

	
		
		
		

