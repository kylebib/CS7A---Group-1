/*****************************************************************************************
*                            Chapter 6 Programming Challenges                            *
*                              Exercise 3. Falling Distance                              *
*                                                                                        *
*                 This program calculates an object's falling distance in meters         *
*                 from seconds.                                                          *
*                                                                                        *
*                                                                                        *
*                 Author: Chris Flores                                                   *
*                 Created: March 20, 2019                                                *
*                                                                                        *
*****************************************************************************************/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


// Function Prototype
double fallingDistance(int time);



int main()
{
	int time;
	double distance = 0;

	cout << "\n\n\n";
	cout << setw(10) << "" << "SECONDS" << setw(7) << "" << "METERS" << endl;
	cout << setw(10) << "" << "---------------------" << endl;
	for (int time = 1; time <= 10; time++)
	{
		distance = fallingDistance(time);
		cout << setw(10) << "" << time << setw(13) << "" << distance << "\n";
	}
}
double fallingDistance(int time)
{
	double distance = 0;
	const double G = 9.8;
	distance = (0.5 * G) * (pow(time, 2));
	return distance;
}
