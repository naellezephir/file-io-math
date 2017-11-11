#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "FileFunctions.h"
#include "Statistics.h"

using namespace std;

int main()
{
	/* tried to make a random generator so that everytime I ran the code to test it there 		would be a different array and things but like thats really not working out so im gonna 	leave that attempt here and just have some test code in Q2.

	srand(time(NULL));
	int a = rand() % (10);
	int b = rand() % (10);
	
	*/
		
	int myArray[5];
	int size;
	const char* filename;
	WriteRandomDataToFile("numbers.txt", 5, 10);
	ReadDataFromFile("numbers.txt", myArray, size);
	float mean = getMean(myArray, size);
	getStDev(myArray, size, mean);
	
	return 0;	
}
