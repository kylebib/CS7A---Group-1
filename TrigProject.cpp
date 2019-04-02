/****************************************************************************
 *                   Group Trigonometry Project Spring 2019                 *
 *                                                                          *
 *      This program is an exploration of trigonometry from the prospect    *
 *      of a right angle triangle, law of Cosine and the usage of the       *
 *      distance formula. Additionally, the program provides calculations   *
 *      to other geometrical shapes: the circle and the trapezoid.          *
 *                                                                          *
 *                      Authors: Kyle Bibeault,                             *
 *                               Ines Campos,                               *
 *                               Luis Rodriguez,                            *
 *                               Chris Flores,                              *
 *                               Theo Brown                                 *
 *                                                                          *
 *                      Created on: March 30, 2019                          *
 ****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

///Function Protypes Framework
void intro();
void mainMenu();
int getChoice();
int getTriangleChoice();
void goodbyeMessage();
void dummyMessage();
void pause();
void clearScreen();


void   trapezoidMenu();
int    trapezoidChoice();
double trapezoidCalcArea(double, double, double);
double trapezoidCalcPerimeter(double, double, double, double);
double trapezoidCalcHeight(double, double, double);
void   trapezoidDisplayOutput(int);


double triangleCalcDistance();
double angToRad(double);
double distanceFormula(double, double, double, double);

const double PI = 3.14159;

int main() {

    int choice,
        triangleChoice,
        trapChoice;

    intro();
    
    do {
        
        mainMenu();

        choice = getChoice();

        switch (choice) {

            //Triangles
            case 1:
                do {
                    triangleChoice = getTriangleChoice();

                    switch (triangleChoice) {

                        case 1:
                            dummyMessage();
                            break;
                        case 2:
                            dummyMessage();
                            break;
                        case 3:
                            dummyMessage();
                            break;
                        default:
                            break;
                        }
                    
                } while (triangleChoice != 4);

                break;
                
                //Circles
            case 2:
                dummyMessage();
                break;

                //Trapezoids
            case 3:
                do {
                trapezoidMenu();
                
                trapChoice = trapezoidChoice();

                    switch (trapChoice) {

                        case 1:
                            trapezoidDisplayOutput(trapChoice);
                            break;
                        case 2:
                            trapezoidDisplayOutput(trapChoice);
                            break;
                        case 3:
                            trapezoidDisplayOutput(trapChoice);
                            break;
                        default:
                            break;
                        }
                    
                } while (trapChoice != 4);
                
                break;

            default:
                break;
        }


    } while (choice != 4);

    goodbyeMessage();

    return 0;
}

void goodbyeMessage() {

    cout << "\n\n\n";
    cout << setw(10) << "" << "Thanks for using the Program, Goodbye\n\n";
    
    pause();

}

void intro() {
    cout << setw(15) << "" << "WELCOME TO TRIG 2019 Ver. 2.0.0\n";
    cout << setw(10) << "" << "___________________________________________\n";

    cout << "\n\n\n\n";

    cout << setw(15) << "" << "       000000000000		000000000000	\n";
    cout << setw(15) << "" << "	    0000000000000000	      0000000000000000	\n";
    cout << setw(15) << "" << "	   000000000000000000	     000000000000000000	\n";
    cout << setw(15) << "" << "	  00000000000000000000	    00000000000000000000\n";
    cout << setw(15) << "" << "	 0000000000000000000000	   0000000000000000000000\n";
    cout << setw(15) << "" << "	000000000000000000000000  000000000000000000000000\n";
    cout << setw(15) << "" << "0000000000000000000000000000000000000000000000000000\n";
    cout << setw(15) << "" << "000000000000000                       00000000000000\n";
    cout << setw(15) << "" << "	00000000000000     Kyle Bibeault     0000000000000\n";
    cout << setw(15) << "" << "	  000000000000     Theodis Brown     00000000000\n";
    cout << setw(15) << "" << "	    0000000000     Ines Campos	     000000000	\n";
    cout << setw(15) << "" << "	      00000000     Chris Flores      0000000	\n";
    cout << setw(15) << "" << "	        000000     Luis Rodriguez    00000	\n";
    cout << setw(15) << "" << "	          0000                       000	\n";
    cout << setw(15) << "" << "	            00000000000000000000000000		\n";
    cout << setw(15) << "" << "	              0000000000000000000000		\n";
    cout << setw(15) << "" << "	                000000000000000000		\n";
    cout << setw(15) << "" << "	                   0000000000000		\n";
    cout << setw(15) << "" << "	                     000000000			\n";
    cout << setw(15) << "" << "	                       00000			\n";
    cout << setw(15) << "" << "	                         0	\n";
     
    pause();

}

void mainMenu() {

    clearScreen();

    cout << "\n\n\n";
    cout << setw(10) << "" << "	 TRIGONOMETRY VERSION 2.0.0\n";
    cout << setw(10) << "" << "___________________________________________\n";

    cout << setw(10) << "" << "1. Triangles\n";
    cout << setw(10) << "" << "2. Circles\n";
    cout << setw(10) << "" << "3. Trapezoids\n";
    cout << setw(10) << "" << "4. Exit program\n\n";

    cout << setw(10) << "" << "Enter your Choice: ";
}

int getChoice() {

    int choice;
    cin >> choice;
    while (choice < 1 || choice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> choice;
    }
    return choice;
}

void dummyMessage() {

    cout << setw(10) << "" << "This page has not yet been built\n";
    pause();
}

int getTriangleChoice() {

    int triChoice;
    cin >> triChoice;
    while (triChoice < 1 || triChoice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> triChoice;
    }
    return triChoice;

}

void pause() {
    system("pause");
}

void clearScreen() {
    system("cls");
}

void trapezoidMenu() {
    
    clearScreen();

    cout << "\n\n\n";
    cout << setw(10) << "" << "	 TRAPEZOIDS\n";
    cout << setw(10) << "" << "________________\n\n";

    cout << setw(10) << "" << "1. Calculate Area\n";
    cout << setw(10) << "" << "2. Calculate Height\n";
    cout << setw(10) << "" << "3. Calculate Angles\n";
    cout << setw(10) << "" << "4. Go Back\n\n";
    
    cout << setw(10) << "" << "Enter your Choice: ";
    
}

int trapezoidChoice() {
    
    int trapChoice;
    cin >> trapChoice;
    while (trapChoice < 1 || trapChoice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> trapChoice;
    }
    return trapChoice;
    
}

double trapezoidCalcArea(double height, double sideA, double sideB) {
    
    return ((sideA + sideB) / 2) * height;
  
}

double trapezoidCalcHeight(double area, double sideA, double sideB) {
    
    return 2 * (area / (sideA + sideB));
    
}

void trapezoidDisplayOutput(int trapChoice) {
    
    clearScreen();
    
    cout << fixed << showpoint << setprecision(2);
    
    int trapChoice1 = trapChoice;
    double height,
           sideA,
           sideB,
           angleAX,
           angleAY,
           angleBX,
           angleBY,
           angleCX,
           angleCY,
           angleDX,
           angleDY,
           distanceAC,
           distanceBD,
           area;
    
    cout << "\n\n\n";
    
    
    if (trapChoice1 == 1) {
        
    cout << setw(15) << "" << "The Area of a Trapezoid\n";
    cout << setw(10) << "" << "__________________________________\n\n";
    cout << setw(10) << "" << "  In order to calculate the area\n";
    cout << setw(10) << "" << "   of a trapezoid, please enter\n ";
    cout << setw(10) << "" << "    the following variables.\n\n";
    cout << setw(10) << "" << "Enter height of trapezoid: ";
    cin >> height;
    
    while (height < 0) {
        cout << setw(10) << "" << "Please enter positive height: ";
        cin >> height;
    }
    
    cout << setw(10) << "" << "Enter left side of trapezoid: ";
    cin >> sideA;
    
    while (sideA < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> sideA;
    }
    
    cout << setw(10) << "" << "Enter left side of trapezoid: ";
    cin >> sideB;
    
    while (sideB < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> sideB;
    }
    
    area = trapezoidCalcArea(height, sideA, sideB);
    
    cout << "\n\n";
    
    cout << setw(10) << "" << "The area is: " << area << " units squared.";
    
    
    }
    
    
    if (trapChoice1 == 2) {
        
    cout << setw(13) << "" << "The Height of a Trapezoid\n";
    cout << setw(10) << "" << "__________________________________\n\n";
    cout << setw(10) << "" << "  In order to calculate the height\n";
    cout << setw(10) << "" << "    of a trapezoid, please enter\n ";
    cout << setw(10) << "" << "      the following variables.\n\n";
    cout << setw(10) << "" << "Enter area of trapezoid: ";
    cin >> area;
    
    while (area < 0) {
        cout << setw(10) << "" << "Please enter positive area: ";
        cin >> area;
    }
    
    cout << setw(10) << "" << "Enter left side of trapezoid: ";
    cin >> sideA;
    
    while (sideA < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> sideA;
    }
    
    cout << setw(10) << "" << "Enter left side of trapezoid: ";
    cin >> sideB;
    
    while (sideB < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> sideB;
    }
    
    height = trapezoidCalcHeight(area, sideA, sideB);
    
    cout << "\n\n";
    
    cout << setw(10) << "" << "The height is: " << height << " units.";
    
    }
    
    if (trapChoice1 == 3) {
        
    cout << setw(5) << "" << "         Calculate Distance \n";
    cout << setw(10) << "" << "__________________________________\n\n";
    cout << setw(10) << "" << "   Enter coordinates for the four\n";
    cout << setw(10) << "" << "   angles to find the distance\n";
    cout << setw(10) << "" << "   between AC and BD\n\n";
    
    cout << setw(10) << "" << "Enter x-coordinate for angle A: ";
    cin >> angleAX;
    
    while (angleAX < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleAX;
    }
    
    cout << setw(10) << "" << "Enter y-coordinate for angle A: ";
    cin >> angleAY;
    
    while (angleAY < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleAY;
    }
    
    cout << setw(10) << "" << "Enter x-coordinate for angle B: ";
    cin >> angleBX;
    
    while (angleBX < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleBX;
    }
    
    cout << setw(10) << "" << "Enter y-coordinate for angle B: ";
    cin >> angleBY;
    
    while (angleBY < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleBY;
    }
  
    cout << setw(10) << "" << "Enter x-coordinate for angle C: ";
    cin >> angleCX;
    
    while (angleCX < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleCX;
    }
    
    cout << setw(10) << "" << "Enter y-coordinate for angle C: ";
    cin >> angleCY;
    
    while (angleCY < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleCY;
    }
    
    cout << setw(10) << "" << "Enter x-coordinate for angle D: ";
    cin >> angleDX;
    
    while (angleDX < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleDX;
    }
    
    cout << setw(10) << "" << "Enter y-coordinate for angle D: ";
    cin >> angleDY;
    
    while (angleDY < 0) {
        cout << setw(10) << "" << "Please enter positive number: ";
        cin >> angleDY;
    }
    
    
    
    distanceAC = distanceFormula(angleAX, angleAY, angleCX, angleCY);
    distanceBD = distanceFormula(angleBX, angleBY, angleDX, angleDY);
    
    cout << "\n\n";
    
    cout << setw(5) << "" << "The distance between angles AC is: " 
            << distanceAC << " units.\n";
    
    cout << setw(5) << "" << "The distance between angles BD is: " 
            << distanceBD << " units.";
    
    }
    
    pause();
    
}


//CHRIS FLORES
/********************************************************************************
*							distanceFormula()									*
*			This function calculates the distance between a set of ordered		*
*			pairs.																*
*																				*
*			Precondition: The user inputs 4 values which will be used as		*
*			arguments.															*
*																				*
*			Postcondition: This function returns the distance by using			*
*			distance formula													*
*																				*
********************************************************************************/
double distanceFormula(double x1, double x2, double y1, double y2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

/********************************************************************************
*								  angToRad()
*				This function converts angles to radians by multiplying theta
*				by PI over 180.
*
*				Precondition:
*
*				Postcondition:
*
*
*********************************************************************************/
double angToRad(double angle) {
	return (angle * PI) / 180;	// Pending variable name for angle 
}

/********************************************************************************
*							triangleCalcDistance()
*				This function
*
*
*				Precondition:
*				
*				Postcondition:
*
********************************************************************************/
double triangleCalcDistance() {

	double x1, y1, x2, y2, x3, y3;

	system("clear");
	cout << "\n\n\n";
	cout << setw(20) << "" << "Calculating Triangle Distance" << endl;
	cout << setw(10) << "" << "________________________________________________" << endl << endl;
	cout << setw(10) << "" << "Coordinates for Side a" << endl;
	cout << setw(10) << "" << "Enter Point 1: ";
	cin >> x1;
	cout << setw(10) << "" << "Enter Point 2: ";
	cin >> y1;
	cout << "\n" << setw(10) << "" << "Coordinates for Side b" << endl;
	cout << setw(10) << "" << "Enter Point 1: ";
	cin >> x2;
	cout << setw(10) << "" << "Enter Point 2: ";
	cin >> y2;
	cout << "\n" << setw(10) << "" << "Coordinates for Side c" << endl;
	cout << setw(10) << "" << "Enter Point 1: ";
	cin >> x3;
	cout << setw(10) << "" << "Enter Point 2: ";
	cin >> y3;

}
