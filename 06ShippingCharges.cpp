/***************************************************
 *              Chapter 6 - Exercise 6             *
 *                 Shipping Charges                *
 *                                                 *
 *          Calculates the rate for shipping       *
 *                                                 *
 *                Author: Kyle Bibeault            *
 *            Created on: March 19, 2019           *
 ***************************************************/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototype
double calculateCharge(double,double);

int main() {

    double weightOfPackage,
           distanceBeingShipped,
           runningTotal = 0.00;
    
    do {
        weightOfPackage = 0;
        distanceBeingShipped = 0;
       
        cout << "\n\nEnter weight of package(in kg), or enter '0' to exit: ";
        cin >> weightOfPackage;
        
        do {
            cout << "\n\nEnter positive weight(in kg), or enter '0' to exit: ";
            cin >> weightOfPackage;
        } while(weightOfPackage < 0);
        
        
        if(weightOfPackage == 0) {
            break;
        }
        
        cout << "\n\nEnter distance package is being shipped(in miles): ";
        cin >> distanceBeingShipped;
        
        do {
            cout << "\n\nEnter positive distance(in miles): ";
            cin >> distanceBeingShipped;
        } while(weightOfPackage < 0);
        
        runningTotal += calculateCharge(weightOfPackage, distanceBeingShipped);
        
        cout << "\n\nThe Charge will be: $" << calculateCharge(weightOfPackage, distanceBeingShipped);
        cout << "\n\Total Charges so far: $" << runningTotal;
        
    } while (weightOfPackage != 0);
    
    cout << "\nThanks, The total charges are: $" << runningTotal << endl;

    return 0;
}


/***************************************************
 *                 calculateCharge()               *
 *                                                 *
 *  Calculates the cost of shipping based on the   *
 *    weight of the packaged and how far it is     *
 *                  being shipped                  *
 *                                                 *
 *   Precondition:    Receives the weight of the   *
 *                    package(entered as a double) *
 *                    and the distance being       *
 *                    shipped(as a double)         *
 *                                                 *
 *   Postcondition:   Returns the cost based on    *
 *                    the rates per 500 miles      *
 *                    shipped                      *
 *                                                 *
 *                Author: Kyle Bibeault            *
 *            Created on: March 19, 2019           *
 ***************************************************/
double calculateCharge(double weightOfPackage, double distanceBeingShipped) {
    
    cout << fixed << showpoint << setprecision(2);
    
    if (weightOfPackage <= 2 && weightOfPackage > 0) {
        return distanceBeingShipped * 0.0062;               //$3.10/500miles
    } else if (weightOfPackage > 2 && weightOfPackage <= 6) {
        return distanceBeingShipped * 0.0084;               //$4.20/500miles
    } else if (weightOfPackage > 6 && weightOfPackage <= 10) {
        return distanceBeingShipped * 0.0106;               //$5.30/500miles
    } else {
        return distanceBeingShipped * 0.0128;               //$6.40/500miles
    }
}


