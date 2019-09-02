// Udemy_Unreal_30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <time.h>

using namespace std;

int GenerateRandomNumber(int range)
{
	return rand() % (range+1);
}

int main()
{ 
	srand(time(0));

	// loop this many times 
	const int count = 20;

	cout << "Generate " << count << " random numbers." << endl;
	
	for (int i = 0; i < count; ++i)
	{
		// This wil generate a number from 0 to 100
		int number = GenerateRandomNumber(100);

		cout << "Generated: " << number << endl;
	}

    return 0;
}

