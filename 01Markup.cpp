/************************************************************************
*							Chapter 6 - Exercise 01						*
*								Markup price							*	
*																		*
*		This program is a modular program to calculate the markup		*
*		price given the wholesale price and the markup paercentage		*
*																		*
*																		*
*					Author:  Ines Campos								*
*					Created: March 19, 2019								*
*																		*
*************************************************************************/

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

/// Function Prototype
double CalculateRetail(double, double);

int main()
{
	cout << "\n\n\n";

    /// Declare Variables
	double wholesale, markup; 

	/// Promtp User to Enter Values
	cout << setw(10) << "" << "Enter the Wholesale price: $";
	cin >> wholesale;

	cout << setw(10) << "" << "Enter the Markup percentage: ";
	cin >> markup;

	markup = markup / 100;


	if (wholesale >= 0 && markup >= 0) {
		cout << fixed << showpoint << setprecision(2); 
		/// Call function
		cout << setw(10) << "" << "The Retail Price is: $" 
			<< CalculateRetail(wholesale, markup) << endl;
	}

	else {
		cout << "Error use only positive integers!!" << endl; 
	}
	return 0;
}
/********************************************************************************
*							 CalculateRetail()									*
*																				*
*		This funtion calculates the markup price using wholesale price and 		*
*		markup percentage														*
*																				*
*		Preconditions:	This funtion takes two doubles as arguments				*
*						Argument 1 is wholesale and Argument 2 is				*
*						markup													*
*																				*
*		Postconditons:	The function returns the retail price of the			*
*						item													*
********************************************************************************/
double CalculateRetail(double wholesalePrice, double markupPercent) {
	return (wholesalePrice + (wholesalePrice * markupPercent));
}


