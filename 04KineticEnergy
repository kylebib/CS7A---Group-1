/************************************************************
*           Chapter 4 - Exercise 04kineticEnergy            *
*                                                           *
*     This program uses a function named kineticEnergy      *
*     to Calculate the kinetic energy of an object based    *
*     on user inputs.                                       *
*                                                           *
*                                                           *
*       @author: Theodis Brown                              *
*         @date: March 19, 2019                             *
************************************************************/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/// Fumction Prototypes
double kineticEnergy(double, double);

int main()
{
	double mass, velocity;

	cout << setw(20) << "" << "This program finds the Kinetic Energy of an object";
	cout << "\n\n\n";

	/// Ask user to enter mass (in kilograms)
	cout << setw(20) << "" << "Enter the mass: ";
	cin  >> mass;


	/// ask user to enter velocity (in meters per second)
	cout << endl << setw(20) << "" << "Enter the velocity: ";
	cin  >> velocity;

	///output kinetic energy in joules
	cout << endl << setw(20) << "" << "This object has is "
         << kineticEnergy(mass, velocity) << " joules." << endl;

	return 0;
}

/*********************************************************
 *                     kineticEnergy                     *
 *                                                       *
 *      This function calculates kinetic energy by       *
 *      multiplying the mass and velocity of the users   *
 *      object                                           *
 *                                                       *
 *      precondition: receives the mass and velocity     *
 *                    of object.                         *
 *                                                       *
 *      postcondition: returns kinetic energy of object  *
 ********************************************************/


double kineticEnergy(double mass, double velocity)
{
    ///Kinetic Energy formula KE = 1⁄2 * (m * v^2)
	return .5 * (mass * pow(velocity, 2));
}

