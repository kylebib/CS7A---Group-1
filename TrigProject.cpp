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


void trapezoidMenu();
int trapezoidChoice();
double trapezoidCalcArea(double, double, double);
double trapezoidCalcPerimeter(double, double, double, double);
double trapezoidCalcHeight(double, double, double);
void trapezoidDisplayOutput(int);

void circleMenu();
int circleChoice();
double areaCircle(double);
double circumference(double);
double arcLength(double, double);
double centerOfCircleX(double, double);
double centerOfCircleY(double, double);
void circleDisplayOutput(int);

double triangleCalcDistance();
double angToRad(double);
double distanceFormula(double, double, double, double);
void calcDistanceRIGHT();
double radToDeg(double);

void triangleMenu();
void menuForRightTriangles();
void menuforEqualateralTriangle();
void menuforIsoscelesTriangle();
void rightTriangleCalulations();
double calOfPythTheorem(double, double);
double calcofLawofcosine(double, double, double, double);
double calcofInverseCos(double, double, double, double);
double CalcToFindAngleA(double, double, double);
void lawOfCosineChart();
double calofAreaofEQ(double, double);
void areaOfanEqualateral();
double areaOfIsosceles(double, double, double);
void calcAreaOfIsosceles();
double formulaForCosine(double, double, double);
double formulaForSine(double, double, double);
double triangleCalcDistance(double, double, double, double,
        double, double, double, double, double);

int triangleChoice();
int getRightTriangleChoice();
int getEqTriangleChoice();
int getIsosTriangleChoice();


double degreeOfangleUsingArcSin(double opp, double hyp);
double degreeOfangleUsingArcCos(double adj, double hyp);
double degreeOfangleUsingArcTan(double opp, double adj);

void menuForSine();
void menuForCos();
void menuForTan();


void findingSidesOfIscosceles();
double calcToFindSideofIsosceles(double p, double b);

double calcforHeightofIsosceles(double h, double a, double b);
void findingtheHeightofanIsosceles();


///This is a little extra if you want to add on the isosceles menu.
void FindingDegreesUsingSineIsosceles();
void FindingDegreesUsingCosineIsosceles();
void FindingDegreesUsingTanIsosceles();

const double PI = 3.14159;

int main() {

    int choice,
            triangleChoice,
            rightTriangleChoice,
            isTriChoice,
            eqTriChoice,
            trapChoice,
            circChoice;

    intro();

    do {

        mainMenu();

        choice = getChoice();

        switch (choice) {

                //Triangles
            case 1:
                do {
                    triangleMenu();

                    triangleChoice = getTriangleChoice();

                    switch (triangleChoice) {
                        case 1: //Right Triangles
                            do {
                                menuForRightTriangles();

                                rightTriangleChoice = getRightTriangleChoice();

                                switch (rightTriangleChoice) {
                                    case 1:
                                        rightTriangleCalulations();
                                        break;
                                    case 2:
                                        calcDistanceRIGHT();
                                        break;
                                    case 3:
                                        menuForCos();
                                        break;
                                    case 4:
                                        menuForSine();
                                        break;
                                    case 5:
                                        menuForTan();
                                        break;
                                    default:
                                        break;
                                }
                            } while (rightTriangleChoice != 6);
                            break;
                        case 2: //Equilateral Triangles
                            do {
                                menuforEqualateralTriangle();

                                eqTriChoice = getEqTriangleChoice();

                                switch (eqTriChoice) {
                                    case 1:
                                        areaOfanEqualateral();
                                        break;
                                    case 2:

                                        break;
                                    case 3:
                                        break;
                                    default:
                                        break;
                                }

                            } while (eqTriChoice != 4);

                            break;
                        case 3: //Isosceles Triangles
                            do {
                                menuforIsoscelesTriangle();

                                isTriChoice = getIsosTriangleChoice();

                                switch (isTriChoice) {
                                    case 1:
                                        calcAreaOfIsosceles;
                                        break;
                                    case 2:
                                        findingSidesOfIscosceles();
                                        break;
                                    case 3:
                                        findingtheHeightofanIsosceles();
                                        break;
                                    default:
                                        break;
                                }
                            } while (isTriChoice != 4);
                            break;
                        default:
                            break;
                    }

                } while (triangleChoice != 4);

                break;

                //Circles
            case 2:
                do {
                    circleMenu();

                    circChoice = circleChoice();

                    switch (circChoice) {

                        case 1:
                            circleDisplayOutput(circChoice);
                            break;
                        case 2:
                            circleDisplayOutput(circChoice);
                            break;
                        case 3:
                            circleDisplayOutput(circChoice);
                            break;
                        case 4:
                            circleDisplayOutput(circChoice);
                            break;
                        default:
                            break;
                    }
                } while (circChoice != 5);

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

}

/****************************************************************************
 *                 Function Description: intro()		            *		            *
 *                                                                          *
 *      when this function is called, the function is responsible for       *
 *      displaying an image and header indicating the start of the program. *
 *                                                                          *
 *      @Precondition:   This function does not take any arguments.         *
 *      @Postcondition:  This function does not return anything.            *
 ***************************************************************************/
void intro() {
    cout << setw(25) << "" << "WELCOME TO TRIG 2019 Ver. 2.0.0\n";
    cout << setw(15) << "" << "____________________________________________________\n";

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

/****************************************************************************
 *                 Function Description: mainMenu()                         *
 *                                                                          *
 *      when this function is called, the function is responsible for       *
 *      clearing the console window adding three line shift top margin	    *
 *      before header and menu is displayed. It is also responsible for     *
 *      prompting the user to enter a choice.				    *
 *                                                                          *
 *      @Precondition:   This function does not take any arguments.         *
 *      @Postcondition:  This function does not return anything.            *
 ***************************************************************************/
void mainMenu() {

    clearScreen();

    cout << "\n\n\n";
    cout << setw(10) << "" << "	 TRIGONOMETRY VERSION 2.0.0\n";
    cout << setw(10) << "" << "________________________________\n\n";

    cout << setw(10) << "" << "1. Triangles\n";
    cout << setw(10) << "" << "2. Circles\n";
    cout << setw(10) << "" << "3. Trapezoids\n";
    cout << setw(10) << "" << "4. Exit program\n\n";

    cout << setw(10) << "" << "Enter your Choice: ";
}

/********************************************************************************
 *                 Function Description: getChoice()				*
 *				             					*
 *      when this function is called, the function shall collect the user's	*
 *      input related to the main menu options.				        *
 *										*
 *      @Precondition:   This function does not take any arguments.		*
 *										*
 *      @Postcondition:  This function returns an integer that reflects the	*
 *                       possible choices in the main menu.             	*
 *******************************************************************************/
int getChoice() {

    int choice;
    cin >> choice;
    while (choice < 1 || choice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> choice;
    }
    return choice;
}

/****************************************************************************
 *                  FUNCTION DESCRIPTION dummyMessage()                     *
 *                                                                          *
 *      This function is a placeholder function until other functions in    *
 *      the program are completed. When called it displays a message and    *
 *      pauses the console screen.                                          *
 *                                                                          *
 *      @Precondition:  This function does not take any arguments.          *
 *      @Postcondition: This function does not return anything.             *
 ****************************************************************************/
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

/****************************************************************************
 *                  FUNCTION DESCRIPTION pause()                            *
 *                                                                          *
 *      This function pauses the console screen when called.                *                           *
 *                                                                          *
 *      @Precondition:  This function does not take any arguments.          *
 *      @Postcondition: This function does not return anything.             *
 ****************************************************************************/
void pause() {
    system("pause");
}

/****************************************************************************
 *                  FUNCTION DESCRIPTION clearScreen()                      *
 *                                                                          *
 *      This function clears the console screen when called.                *                           *
 *                                                                          *
 *      @Precondition:  This function does not take any arguments.          *
 *      @Postcondition: This function does not return anything.             *
 ****************************************************************************/
void clearScreen() {
    system("cls");
}

/****************************************************************************
 *                 Function Description: circleMenu()                       *
 *                                                                          *
 *      when this function is called, the function is responsible for       *
 *      clearing the console window add three line shift top margin before  *
 *      header and circle submenu is displayed. It is also responsible for  *
 *      prompting the user to enter a choice.                               *
 *                                                                          *
 *      @Precondition:   This function does not take any arguments.         *
 *      @Postcondition:  This function does not return anything.            *
 ***************************************************************************/
void circleMenu() {

    clearScreen();

    cout << "\n\n\n";
    cout << setw(10) << "" << "	 CIRCLES\n";
    cout << setw(10) << "" << "_______________________________\n\n";

    cout << setw(10) << "" << "1. Calculate Area\n";
    cout << setw(10) << "" << "2. Calculate Circumference\n";
    cout << setw(10) << "" << "3. Calculate Arc Length\n";
    cout << setw(10) << "" << "4. Calculate Center Of Circle\n";
    cout << setw(10) << "" << "5. Go Back\n\n";

    cout << setw(10) << "" << "Enter your Choice: ";
}

/****************************************************************************
 *                 Function Description: circleChoice()                     *
 *                                                                          *
 *      when this function is called, the function shall collect the users  *
 *      input related to the circle submenu options.                        *
 *						                            *
 *      @Precondition:   This function does not take any arguments.         *
 *									    *
 *      @Postcondition:  This function returns an integer that reflects the *
 *                       possible choices in the circle submenu.            *
 ***************************************************************************/
int circleChoice() {

    int circChoice;
    cin >> circChoice;

    while (circChoice < 1 || circChoice > 5) {
        cout << "The only valid Choices are 1-5. Please re-enter: ";
        cin >> circChoice;
    }
    return circChoice;
}

/****************************************************************************
 *                 Function Description: areaCircle()                       *
 *                                                                          *
 *      This function is responsible for calculating the area of a circle   *
 *		using the radius.		   		            *
 *                                                                          *
 *      @Precondition:  This funtion takes the one double as an argument.   *
 *			That argument being the radius of the circle.	    *
 *	 								    *
 *      @Postcondition: This function returns the area of the circle. 	    *
 ***************************************************************************/
double areaCircle(double radius) {

    return PI * (radius * radius);

}

/****************************************************************************
 *                 Function Description: circumference()                    *
 *                                                                          *
 *      This function is responsible for calculating the circumference of   *
 *		a circle using the radius.				    *
 *                                                                          *
 *   @Precondition:  This funtion takes the one double as an argument.	    *
 *		     That argument being the radius of the circle.          *
 *									    *
 *   @Postcondition: This function returns the circumference of the circle. *
 ***************************************************************************/
double circumference(double radius) {

    return (2 * PI * radius);

}

/********************************************************************************
 *                 Function Description: arcLength()				*
 *										*
 *      This function is responsible for calculating the circumference of 	*
 *		a circle using the radius.					*
 *										*
 *   @Precondition:  This funtion takes two doubles as arguments. The first	*
 *		     being the radius and the second being the angle from	*
 *		     the positive x-axis.					*
 *										*
 *   @Postcondition: This function returns the arc length of the curve. 	*
 *******************************************************************************/
double arcLength(double radius, double angle) {

    return (PI * 2 * radius) * (static_cast<double> (angle) / 360);

}

/********************************************************************************
 *                 Function Description: centerOfCircleX()			*
 *										*
 *      This function is responsible for calculating the x-coordinate of	*
 *	circle's center using two points that represent the circles diameter.	*
 *										*
 *   @Precondition:  This funtion takes two doubles as arguments. The first	*
 *                   being the x-coordinate of the first point and second	*
 *		     being the x-coordinate of the second point.		*
 *										*
 *   @Postcondition: This function returns the x-coordinate of the circle's 	*
 *					 center.				*
 *******************************************************************************/
double centerOfCircleX(double x1, double x2) {

    return (x1 + x2) / 2;
}

/********************************************************************************
 *                 Function Description: centerOfCircleY()          		*
 *										*
 *      This function is responsible for calculating the y-coordinate of	*
 *	circle's center using two points that represent the circles             *
 *      diameter.                                                               *
 *										*
 *   @Precondition:  This funtion takes two doubles as arguments. The first	*
 *		     being the y-coordinate of the first point and second       *
 *		     being the y-coordinate of the second point.		*
 *										*
 *   @Postcondition: This function returns the y-coordinate of the circle's 	*
 *					 center.				*
 *******************************************************************************/
double centerOfCircleY(double y1, double y2) {

    return (y1 + y2) / 2;
}

/*************************************************************************************
 *		Function Description: circleDisplayOutput()			     *
 *										     *
 *	This Function is responsible for clearing the console window, displaying     *
 *	the user choosen option and providing the format necessary for each viable   *
 *	choice.									     *
 *				 						     *
 *	@Precondition:	This function takes an integer of the user's choice from the *
 *			circle submenu as an argument.		 		     *
 *								 		     *
 *	@Postcondition:	This function returns nothing.		 		     *
 *			 							     *
 **************************************************************************************/
void circleDisplayOutput(int circChoice) {

    clearScreen();

    cout << fixed << showpoint << setprecision(2);

    int circChoice1 = circChoice;
    double arclength,
            circumf,
            radius,
            centerX,
            centerY,
            angle,
            area,
            x1, y1,
            x2, y2;


    cout << "\n\n\n";

    if (circChoice1 == 1) {

        cout << setw(15) << "" << "The Area of a Circle\n";
        cout << setw(10) << "" << "______________________________________\n\n";
        cout << setw(10) << "" << "  In order to calculate the area\n";
        cout << setw(10) << "" << "  of a circle, please enter the\n";
        cout << setw(10) << "" << "  following variable.\n\n";

        cout << setw(10) << "" << "Please enter radius of the circle: ";
        cin >> radius;

        while (radius < 0) {
            cout << setw(10) << "" << "Invalid Input!! Please re-enter a positive radius: ";
            cin >> radius;
        }

        area = areaCircle(radius);

        cout << "\n\n";

        cout << setw(10) << "" << "The area of the cicle is: " << area << " units squared.\n\n";

    }

    if (circChoice1 == 2) {

        cout << setw(15) << "" << "The Circumference of a Circle\n";
        cout << setw(10) << "" << "___________________________________________\n\n";
        cout << setw(10) << "" << "  In order to calculate the Circumference\n";
        cout << setw(10) << "" << "  of a circle, please enter the following\n";
        cout << setw(10) << "" << "  variable.\n\n";

        cout << setw(10) << "" << "Please enter radius of the circle: ";
        cin >> radius;

        while (radius < 0) {
            cout << setw(10) << "" << "Invalid Input!! Please re-enter a positive radius: ";
            cin >> radius;
        }

        circumf = circumference(radius);

        cout << "\n\n";

        cout << setw(10) << "" << "The circumference of the cicle is: " << circumf << " units.\n\n";

    }

    if (circChoice1 == 3) {

        cout << setw(15) << "" << "The Arc Length of curve \n";
        cout << setw(10) << "" << "________________________________________\n\n";
        cout << setw(10) << "" << "  In order to calculate the Arc Length\n";
        cout << setw(10) << "" << "  of a curve that lies on a circle,\n";
        cout << setw(10) << "" << "  please enter the needed variables.\n\n";

        cout << fixed << showpoint << setprecision(2);

        cout << setw(10) << "" << "Please enter radius of the circle: ";
        cin >> radius;

        while (radius < 0) {
            cout << setw(10) << "" << "Invalid Input!! Please re-enter a positive radius: ";
            cin >> radius;
        }

        cout << setw(10) << "" << "Please enter angle in degrees from positive x-axis: ";
        cin >> angle;

        while (angle < 0) {
            cout << setw(10) << "" << "Angle cannot be formed."
                    "Please re-enter a positive angle: ";
            cin >> angle;
        }


        arclength = arcLength(radius, angle);

        cout << "\n\n";

        cout << setw(10) << "" << "The Arc Length of the curve is: " << arclength << " units.\n\n";

    }

    if (circChoice1 == 4) {

        cout << setw(15) << "" << "The Center of a Circle\n";
        cout << setw(10) << "" << "________________________________________\n\n";
        cout << setw(10) << "" << "  In order to calculate the Center of\n";
        cout << setw(10) << "" << "  a circle, please enter the following\n";
        cout << setw(10) << "" << "  coordinates that represent the \n";
        cout << setw(10) << "" << "  circle's diameter.\n\n";

        cout << fixed << showpoint << setprecision(2);

        cout << setw(10) << "" << "Please enter the x-coordinate of the First point: ";
        cin >> x1;

        cout << setw(10) << "" << "Please enter the y-coordinate of the First point: ";
        cin >> y1;

        cout << setw(10) << "" << "Please enter the x-coordinate of the Second point: ";
        cin >> x2;

        cout << setw(10) << "" << "Please enter the y-coordinate of the Second point: ";
        cin >> y2;

        centerX = centerOfCircleX(x1, x2);
        centerY = centerOfCircleY(y1, y2);

        cout << "\n\n";

        cout << setw(10) << "" << "The Center of the circle is (" << centerX << " , " << centerY << ")";
    }

    pause();
}

/****************************************************************************
 *                  FUNCTION DESCRIPTION trapezoidMenu()                    *
 *                                                                          *
 *      This function clears the console screen when called, and then       *
 *      displays a menu of related trapezoid calculations that the user     *
 *      can select from.                                                    *
 *                                                                          *
 *      @Precondition:  This function does not take any arguments.          *
 *      @Postcondition: This function does not return anything.             *
 ****************************************************************************/
void trapezoidMenu() {

    clearScreen();

    cout << "\n\n\n";
    cout << setw(10) << "" << "	 TRAPEZOIDS\n";
    cout << setw(10) << "" << "________________\n\n";

    cout << setw(10) << "" << "1. Calculate Area\n";
    cout << setw(10) << "" << "2. Calculate Height\n";
    cout << setw(10) << "" << "3. Calculate Distance\n";
    cout << setw(10) << "" << "4. Go Back\n\n";

    cout << setw(10) << "" << "Enter your Choice: ";

}

/****************************************************************************
 *                  FUNCTION DESCRIPTION trapezoidChoice()                  *
 *                                                                          *
 *      This function when called will prompt the user to enter an integer  *
 *      choice representing their menu selection. If the user enters a      *
 *      number that is not between 1 and 4, endpoints included, then the    *
 *      function will prompt the user to re-enter their selection.          *                           *
 *                                                                          *
 *      @Precondition:  This function does not take any arguments.          *
 *      @Postcondition: This function returns an integer representing       *
 *                      the user's menu selection choice.                   *
 ****************************************************************************/
int trapezoidChoice() {

    int trapChoice;
    cin >> trapChoice;
    while (trapChoice < 1 || trapChoice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> trapChoice;
    }
    return trapChoice;

}

/****************************************************************************
 *                  FUNCTION DESCRIPTION trapezoidCalcArea()                *
 *                                                                          *
 *      This function receives three doubles passed by value, representing  *
 *      the height, left and right sides of the trapezoid and returns the   *
 *      area.                                                               *
 *                                                                          *
 *      @Precondition:  This function receives three doubles as arguments.  *
 *      @Postcondition: This function returns the area of the trapezoid.    *
 ****************************************************************************/
double trapezoidCalcArea(double height, double sideA, double sideB) {

    return ((sideA + sideB) / 2) * height;

}

/****************************************************************************
 *                  FUNCTION DESCRIPTION trapezoidCalcHeight()              *
 *                                                                          *
 *      This function receives three doubles passed by value, representing  *
 *      the area, left and right sides of the trapezoid and returns the     *
 *      area.                                                               *
 *                                                                          *
 *      @Precondition:  This function receives three doubles as arguments.  *
 *      @Postcondition: This function returns the height of the trapezoid.  *
 ****************************************************************************/
double trapezoidCalcHeight(double area, double sideA, double sideB) {

    return 2 * (area / (sideA + sideB));

}

/****************************************************************************
 *                  FUNCTION DESCRIPTION trapezoidDisplayOutput()           *
 *                                                                          *
 *      This function receives one integer trapChoice as an argument passed *
 *      by value and first clears the screen before outputting a menu based *
 *      on the value of the passed integer. Each of the three possible      *
 *      menus will collect data from the user to perform a calculation.     *                                                               *
 *                                                                          *
 *      @Precondition:  This function receives one integer as an argument.  *
 *      @Postcondition: This function does not return anything.             *
 ****************************************************************************/
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

        cout << setw(17) << "" << " A _____________ B\n";
        cout << setw(17) << "" << "  /     |       \\\n";
        cout << setw(16) << "" << "a /      |h       \\ b\n";
        cout << setw(16) << "" << " /_______|_________\\\n";
        cout << setw(15) << "" << "D                     C\n\n";

        cout << setw(10) << "" << "Enter height of trapezoid: ";
        cin >> height;

        while (height < 0) {
            cout << setw(10) << "" << "Please enter positive height: ";
            cin >> height;
        }

        cout << setw(10) << "" << "Enter side a of trapezoid: ";
        cin >> sideA;

        while (sideA < 0) {
            cout << setw(10) << "" << "Please enter positive number: ";
            cin >> sideA;
        }

        cout << setw(10) << "" << "Enter side b of trapezoid: ";
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

        cout << setw(17) << "" << " A _____________ B\n";
        cout << setw(17) << "" << "  /     |       \\\n";
        cout << setw(16) << "" << "a /      |h       \\ b\n";
        cout << setw(16) << "" << " /_______|_________\\\n";
        cout << setw(15) << "" << "D                     C\n\n";

        cout << setw(10) << "" << "Enter area of trapezoid: ";
        cin >> area;

        while (area < 0) {
            cout << setw(10) << "" << "Please enter positive area: ";
            cin >> area;
        }

        cout << setw(10) << "" << "Enter side a of trapezoid: ";
        cin >> sideA;

        while (sideA < 0) {
            cout << setw(10) << "" << "Please enter positive number: ";
            cin >> sideA;
        }

        cout << setw(10) << "" << "Enter side b of trapezoid: ";
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

        cout << setw(17) << "" << " A _____________ B\n";
        cout << setw(17) << "" << "  /     |       \\\n";
        cout << setw(16) << "" << "a /      |h       \\ b\n";
        cout << setw(16) << "" << " /_______|_________\\\n";
        cout << setw(15) << "" << "D                     C\n\n";

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



        distanceAC = distanceFormula(angleAX, angleCX, angleAY, angleCY);
        distanceBD = distanceFormula(angleBX, angleDX, angleBY, angleDY);

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
    return (angle * PI) / 180; // Pending variable name for angle
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


void triangleMenu() {
    system("cls");
    cout << endl << endl << endl;
    cout << setw(10) << "" << "     TRIANGLE MENU" << endl;
    cout << setw(10) << "" << "----------------------------" << endl;
    cout << setw(10) << "" << "1. Right and law of Triangles " << endl;
    cout << setw(10) << "" << "2. EqualLateral Triangles " << endl;
    cout << setw(10) << "" << "3. Isosceles Triangles" << endl;
    cout << setw(10) << "" << "4. Exit back to main menu" << endl;
    cout << endl;
    cout << setw(10) << "" << "Enter Your Choice: ";
}

void menuForRightTriangles() {
    cout << fixed << showpoint << setprecision(3) << endl;
    double leg1, leg2, hyp;
    double a, b, c, A, B, C, x1, y1, x2, y2, x3, y3, side_A, side_B, side_C;

    system("cls");
    cout << endl << endl << endl;
    cout << setw(10) << "" << "RIGHT AND LAWS OF TRIANGLE MENU" << endl;
    cout << setw(10) << "" << "----------------------------" << endl;
    cout << setw(10) << "" << "1. Right Triangle(Pythagorean Theorem)" << endl;
    cout << setw(10) << "" << "2. Distance Formula for Triangle Calculation" << endl;
    cout << setw(10) << "" << "3. Calculating cosine" << endl;
    cout << setw(10) << "" << "4. Calculating Sine" << endl;
    cout << setw(10) << "" << "5. Calculating Tangent" << endl;
    cout << setw(10) << "" << "6. Exit Program to main Triangle Menu" << endl;

}

void menuforEqualateralTriangle() {

    system("cls");
    cout << endl << endl << endl;
    cout << setw(10) << "" << "EQUALATERAL TRIANGLE MENU" << endl;
    cout << setw(10) << "" << "----------------------------" << endl;
    cout << setw(10) << "" << "1.Area of EQ Triangle " << endl;
    cout << setw(10) << "" << "2.Finding the height of an EQ Triangle " << endl;
    cout << setw(10) << "" << "3.Perimeter " << endl;
    cout << setw(10) << "" << "4. Exit back to TIRANGLE MENU" << endl;
    cout << endl;

}

void menuforIsoscelesTriangle() {
    system("cls");
    cout << endl << endl << endl;
    cout << setw(10) << "" << "ISOSCELES TRIANGLE MENU" << endl;
    cout << setw(10) << "" << "----------------------------" << endl;
    cout << setw(10) << "" << "1.Area of an Isosceles Triangle " << endl;
    cout << setw(10) << "" << "2.Finding Side a1 and a2 of an Isosceles Triangle " << endl;
    cout << setw(10) << "" << "3.Find The height of the Isosceles Triangle " << endl;
    cout << setw(10) << "" << "4. Exit back to TIRANGLE MENU" << endl;
    cout << endl;
}

void rightTriangleCalulations() {
    double leg_a, leg_b;

    clearScreen();


    cout << endl << endl << endl;
    cout << setw(10) << "" << "Right Triangle(Pythagorean Theorem)" << endl;
    cout << setw(10) << "" << "-----------------------------------" << endl;
    cout << setw(10) << "" << "          |\\     " << endl;
    cout << setw(10) << "" << "          | \\   " << endl;
    cout << setw(10) << "" << "          |  \\   " << endl;
    cout << setw(10) << "" << "          |   \\  " << endl;
    cout << setw(10) << "" << "          |    \\      " << endl;
    cout << setw(10) << "" << " opposite |     \\  Hypotnuse    " << endl;
    cout << setw(10) << "" << "          |      \\        " << endl;
    cout << setw(10) << "" << "          |       \\       " << endl;
    cout << setw(10) << "" << "          |        \\      " << endl;
    cout << setw(10) << "" << "          |_        \\     " << endl;
    cout << setw(10) << "" << "          |_|________\\     " << endl << endl;
    cout << setw(10) << "" << "             Adjacent      " << endl;
    cout << setw(10) << "" << "-----------------------------------------------" << endl;
    cout << setw(10) << "" << "Enter The Length of the Adjacent side";
    cin >> leg_a;
    if (leg_a <= 0) {

        while (leg_a <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> leg_a;
        }


    }

    cout << setw(10) << "" << "Enter the length of Leg b: ";
    cin >> leg_b;
    if (leg_b <= 0) {
        while (leg_b <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> leg_b;
        }

    }

    cout << endl << endl;

    cout << setw(10) << "" << "The Answer is: " << calOfPythTheorem(leg_a, leg_b) << endl << endl;

    cout << endl;

    pause();

}

double calOfPythTheorem(double leg_a, double leg_b) {
    return sqrt(pow(leg_a, 2) + pow(leg_b, 2));
}

double calcofLawofcosine(double a, double b, double c, double C) {
    return c = sqrt(pow(a, 2) + pow(b, 2) - (2 * a * b * cos(PI * C / 180)));
}

double calcofInverseCos(double a, double b, double c, double B) {
    return B = ((acos((pow(b, 2) - (pow(a, 2) + pow(c, 2)))
            / (-2 * a * c))) * 180) / PI;
}

double CalcToFindAngleA(double A, double B, double C) {
    return A = 180 - (B + C);
}

void lawOfCosineChart() {

    double a, b, c, A, B, C;

    system("cls");
    cout << endl << endl << endl;


    cout << setw(15) << "" << "LAW OF COSINE" << endl;
    cout << setw(10) << "" << "-------------------------" << endl;
    cout << setw(10) << "" << "           A \n " << endl;
    cout << setw(10) << "" << "           /\\" << endl;
    cout << setw(10) << "" << "          /  \\" << endl;
    cout << setw(10) << "" << "         /    \\  " << endl;
    cout << setw(10) << "" << "      b /      \\ c" << endl;
    cout << setw(10) << "" << "       /        \\" << endl;
    cout << setw(10) << "" << "      /          \\" << endl;
    cout << setw(10) << "" << "     /____________\\" << endl;
    cout << setw(10) << "" << "    C       a      B" << endl;
    cout << endl;

    cout << setw(10) << "" << "Enter The length of side a: ";
    cin >> a;
    if (a <= 0) {

        while (a <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> a;
        }


    }

    cout << endl;
    cout << setw(10) << "" << "Enter Length of side b: ";
    cin >> b;

    if (b <= 0) {

        while (b <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> b;
        }


    }
    cout << endl;
    cout << setw(10) << "" << "Enter side c between the angles of A and B: ";
    cin >> C;

    if (C <= 0) {

        while (C <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> C;
        }


    }

    c = calcofLawofcosine(a, b, c, C);
    B = calcofInverseCos(a, b, c, B);
    A = CalcToFindAngleA(A, B, C);



    cout << setw(10) << "" << "The length of side c is: " << c << endl;
    cout << setw(10) << "" << "__________________________________________" << endl;
    cout << endl;
    cout << setw(10) << "" << " The remaining angles are <A and <B and they are " << endl;
    cout << setw(10) << "" << "angle B: " << B << endl;
    cout << setw(10) << "" << "angle A: " << A << endl;
    cout << endl;

    system("pause");
}

double calofAreaofEQ(double A, double a) {
    return A = (sqrt(3)) / 4 * pow(a, 2);
}

void areaOfanEqualateral() {

    double A, a;
    
    system("cls");
    
    cout << endl << endl << endl;
    cout << setw(10) << "" << "CALULATING THE AREA OF AN EQUALTERAL" << endl;
    cout << setw(10) << "" << "-----------------------------------" << endl;
    cout << endl;
    cout << setw(10) << "" << "Enter The length of side a: ";
    cin >> a;

    if (a <= 0) {

        while (a <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> a;
        }


    }
    A = calofAreaofEQ(A, a);


    cout << endl;
    cout << setw(10) << "" << "The Area of the Equalateral is: " << A << endl;
    cout << endl << endl;


    system("pause");
}

double areaOfIsosceles(double A, double b, double h) {
    return A = (b * h) / 2;
}

void calcAreaOfIsosceles() {

    double b, h, A;
    
    system("cls");
    int choice;
    cout << endl << endl << endl;
    cout << setw(10) << "" << "CALULATING THE AREA OF AN ISOSCELES TRIANGLE" << endl;
    cout << setw(10) << "" << "--------------------------------------------" << endl;
    cout << setw(15) << "" << "            A \n " << endl;
    cout << setw(15) << "" << "           / \\" << endl;
    cout << setw(15) << "" << "          / | \\" << endl;
    cout << setw(15) << "" << "      \\  /  |  \\ / " << endl;
    cout << setw(15) << "" << "      b /   |   \\ c" << endl;
    cout << setw(15) << "" << "       /    |    \\" << endl;
    cout << setw(15) << "" << "      /     |_    \\" << endl;
    cout << setw(15) << "" << "     /______|_|____\\" << endl;
    cout << setw(15) << "" << "    C       a       B" << endl;

    cout << endl;
    cout << setw(10) << "" << "----------------------------------------------" << endl;

    cout << endl;
    cout << setw(10) << "" << "Enter The length of the base: ";
    cin >> b;

    if (b <= 0) {

        while (b <= 0) {

            cout << setw(10) << "" << "No Negatives or zeros!!! Please try again: ";
            cin >> b;
        }


    }
    cout << endl;
    cout << setw(10) << "" << "Enter The length of the height: ";
    cin >> h;

    if (h <= 0) {

        while (h <= 0) {

            cout << setw(10) << "" << "No Negatives or zeros!!! Please try again: ";
            cin >> h;
        }


    }
    A = areaOfIsosceles(A, b, h);

    cout << setw(10) << "" << "The Area of the Isosceles triangle is: " << A << endl;
    cout << endl;
    cout << endl;

    system("pause");
}

double formulaForCosine(double adj, double hyp, double cosine) {
    return cosine = adj / hyp;
}

double formulaForSine(double opp, double hyp, double sine) {
    return sine = opp / hyp;
}

double triangleCalcDistance(double x1, double y1, double x2, double y2,
        double x3, double y3, double side_A, double side_B, double side_C) {

    clearScreen();
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
    side_A = distanceFormula(x1, x2, y1, y2);
    side_B = distanceFormula(x2, x3, y2, y3);
    side_C = distanceFormula(x1, x3, y1, y3);
    cout << endl;
    cout << setw(10) << "" << "Applying the Distance Formula..." << endl;
    cout << setw(10) << "" << "Side A = " << side_A << endl;
    cout << setw(10) << "" << "Side B = " << side_B << endl;
    cout << setw(10) << "" << "Side C = " << side_C << endl << endl;


    pause();

}

int triangleChoice() {

    int triangleChoice;
    cin >> triangleChoice;
    while (triangleChoice < 1 || triangleChoice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> triangleChoice;
    }
    return triangleChoice;

}

int getRightTriangleChoice() {
    int rightTriangleChoice;
    cin >> rightTriangleChoice;
    while (rightTriangleChoice < 1 || rightTriangleChoice > 6) {
        cout << "The only valid Choices are 1-6. Please re-enter: ";
        cin >> rightTriangleChoice;
    }
    return rightTriangleChoice;
}

int getEqTriangleChoice() {

    int eqTriangleChoice;
    cin >> eqTriangleChoice;
    while (eqTriangleChoice < 1 || eqTriangleChoice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> eqTriangleChoice;
    }
    return eqTriangleChoice;
}

int getIsosTriangleChoice() {

    int isTriangleChoice;
    cin >> isTriangleChoice;
    while (isTriangleChoice < 1 || isTriangleChoice > 4) {
        cout << "The only valid Choices are 1-4. Please re-enter: ";
        cin >> isTriangleChoice;
    }
    return isTriangleChoice;
}

/********************************************************************************
 *							degreeofangleUsingArcSin()							*
 *			This function calculates the degree between Given opp and Hypotnuse *
 *			    																*
 *																				*
 *			Precondition: The user inputs 2 values which will be used as		*
 *			arguments.															*
 *																				*
 *			Postcondition: This function returns the menuForSine by using   	*
 *			Sine formula    													*
 *																				*
 ********************************************************************************/
double degreeOfangleUsingArcSin(double opp, double hyp) {
    return radToDeg(asin(opp / hyp));
}

/********************************************************************************
 *							degreeofangleUsingArcCos()					   	    *
 *			This function calculates the degree between Given opp and Hypotnuse *
 *			    																*
 *																				*
 *			Precondition: The user inputs 2 values which will be used as		*
 *			arguments.															*
 *																				*
 *			Postcondition: This function returns the menuForSine by using   	*
 *			Sine formula    													*
 *																				*
 ********************************************************************************/
double degreeOfangleUsingArcCos(double adj, double hyp) {
    return radToDeg(acos(adj / hyp));
}

/********************************************************************************
 *							degreeofangleUsingArcTan()					    	*
 *			This function calculates the degree between Given opp and Hypotnuse *
 *			    																*
 *																				*
 *			Precondition: The user inputs 2 values which will be used as		*
 *			arguments.															*
 *																				*
 *			Postcondition: This function returns the menuForSine by using   	*
 *			Sine formula    													*
 *																				*
 ********************************************************************************/
double degreeOfangleUsingArcTan(double opp, double adj) {
    return radToDeg(atan(adj / opp));
}

/********************************************************************************
 *							menuForSine()		        						*
 *				This function collects 2 user inputs and uses 3 of them			*
 *				as arguments in the function for solving the Degree for Sine    *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				menuForSin()											   	    *
 *																				*
 ********************************************************************************/
void menuForSine() {
    double opp, hyp, x;
    system("cls");
    cout << endl << endl << endl;
    cout << setw(10) << "" << "finding the degree of x using sin" << endl;
    cout << setw(10) << "" << "-----------------------------------" << endl;
    cout << setw(10) << "" << "          |\\     " << endl;
    cout << setw(10) << "" << "          | \\   " << endl;
    cout << setw(10) << "" << "          |  \\   " << endl;
    cout << setw(10) << "" << "          |   \\  " << endl;
    cout << setw(10) << "" << "          |    \\      " << endl;
    cout << setw(10) << "" << " opposite |     \\  Hypotnuse    " << endl;
    cout << setw(10) << "" << "          |      \\        " << endl;
    cout << setw(10) << "" << "          |       \\       " << endl;
    cout << setw(10) << "" << "          |        \\      " << endl;
    cout << setw(10) << "" << "          |_        \\     " << endl;
    cout << setw(10) << "" << "          |_|_______x_\\     " << endl << endl;
    cout << setw(10) << "" << "                   " << endl;
    cout << setw(10) << "" << "-----------------------------------------------" << endl;
    cout << endl << endl;
    cout << setw(10) << "" << "in order to find the name degree of x we need to" << endl;
    cout << setw(10) << "" << "know what sin(x) is. and we know that sin(x)= opp/hyp.  " << endl;
    cout << endl;
    cout << setw(10) << "" << "Enter the length of the Opposite: ";
    cin >> opp;
    if (opp <= 0) {

        while (opp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> opp;
        }


    }

    cout << setw(10) << "" << "Enter the length of the Hypotnuse: ";
    cin >> hyp;
    if (hyp <= 0) {

        while (hyp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> hyp;
        }


    }
    cout << endl;

    x = degreeOfangleUsingArcSin(opp, hyp);

    cout << setw(10) << "" << "sin(x)= " << opp << "/" << hyp << endl;
    cout << setw(10) << "" << "To have the degree the function has to be x = arcsine(opp/hyp)" << endl;
    cout << setw(10) << "" << "So x = " << x << static_cast<char> (248) << endl;



    system("pause");












}

/********************************************************************************
 *							menuForCos()		        						*
 *				This function collects 2 user inputs and uses 3 of them			*
 *				as arguments in the function for solving the Degree for Cosine  *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				menuForCos().											   	    *
 *																				*
 ********************************************************************************/
void menuForCos() {
    double adj, hyp, x;
    system("cls");
    cout << endl << endl << endl;
    cout << setw(10) << "" << "finding the degree of x using Cosine" << endl;
    cout << setw(10) << "" << "-----------------------------------" << endl;
    cout << setw(10) << "" << "          |\\     " << endl;
    cout << setw(10) << "" << "          | \\   " << endl;
    cout << setw(10) << "" << "          |  \\   " << endl;
    cout << setw(10) << "" << "          |   \\  " << endl;
    cout << setw(10) << "" << "          |    \\      " << endl;
    cout << setw(10) << "" << "          |     \\  Hypotnuse    " << endl;
    cout << setw(10) << "" << "          |      \\        " << endl;
    cout << setw(10) << "" << "          |       \\       " << endl;
    cout << setw(10) << "" << "          |        \\      " << endl;
    cout << setw(10) << "" << "          |_        \\     " << endl;
    cout << setw(10) << "" << "          |_|______x_\\     " << endl << endl;
    cout << setw(10) << "" << "            Adjacent       " << endl;
    cout << setw(10) << "" << "-----------------------------------------------" << endl;
    cout << endl << endl;
    cout << setw(10) << "" << "in order to find the name degree of x we need to" << endl;
    cout << setw(10) << "" << "know what cos(x) is. and we know that cos(x)= adj/hyp.  " << endl;
    cout << endl;
    cout << setw(10) << "" << "Enter the length of the Adjacent: ";
    cin >> adj;
    if (adj <= 0) {

        while (adj <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> adj;
        }


    }

    cout << setw(10) << "" << "Enter the length of the Hypotnuse: ";
    cin >> hyp;
    if (hyp <= 0) {

        while (hyp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> hyp;
        }


    }
    cout << endl;

    x = degreeOfangleUsingArcCos(adj, hyp);

    cout << setw(10) << "" << "cos(x)= " << adj << "/" << hyp << endl;
    cout << setw(10) << "" << "To have the degree the function has to be x = arcCos(opp/hyp)" << endl;
    cout << setw(10) << "" << "So x = " << x << static_cast<char> (248) << endl;



    system("pause");












}

/********************************************************************************
 *							menuForTan()		        						*
 *				This function collects 2 user inputs and uses 3 of them			*
 *				as arguments in the function for solving the Degree for Tan     *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				menuForTan()											   	    *
 *																				*
 ********************************************************************************/

void menuForTan() {
    double x, opp, adj;
    system("cls");
    cout << endl << endl << endl;
    cout << setw(10) << "" << "finding the degree of x using Tangent" << endl;
    cout << setw(10) << "" << "-----------------------------------" << endl;
    cout << setw(10) << "" << "          |\\     " << endl;
    cout << setw(10) << "" << "          | \\   " << endl;
    cout << setw(10) << "" << "          |  \\   " << endl;
    cout << setw(10) << "" << "          |   \\  " << endl;
    cout << setw(10) << "" << "          |    \\      " << endl;
    cout << setw(10) << "" << " opposite |     \\      " << endl;
    cout << setw(10) << "" << "          |      \\        " << endl;
    cout << setw(10) << "" << "          |       \\       " << endl;
    cout << setw(10) << "" << "          |        \\      " << endl;
    cout << setw(10) << "" << "          |_        \\     " << endl;
    cout << setw(10) << "" << "          |_|______x_\\     " << endl << endl;
    cout << setw(10) << "" << "            Adjacent       " << endl;
    cout << setw(10) << "" << "-----------------------------------------------" << endl;
    cout << endl << endl;
    cout << setw(10) << "" << "in order to find the name degree of x we need to" << endl;
    cout << setw(10) << "" << "know what tan(x) is. and we know that tan(x)= opp/adj.  " << endl;
    cout << endl;
    cout << setw(10) << "" << "Enter the length of the Opposite: ";
    cin >> opp;
    if (opp <= 0) {

        while (opp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> opp;
        }


    }

    cout << setw(10) << "" << "Enter the length of the Adjacent: ";
    cin >> adj;
    if (adj <= 0) {

        while (adj <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> adj;
        }


    }
    cout << endl;

    x = degreeOfangleUsingArcTan(opp, adj);

    cout << setw(10) << "" << "cos(x)= " << opp << "/" << adj << endl;
    cout << setw(10) << "" << "To have the degree the function has to be x = arcTan(opp/hyp)" << endl;
    cout << setw(10) << "" << "So x = " << x << static_cast<char> (248) << endl;

    system("pause");

}

double calcToFindSideofIsosceles(double p, double b) {
    return (p / 2) * (b / 2);
}

/********************************************************************************
 *								findingSidesOfIscosceles()	        			*
 *				This function collects 2 user inputs and uses 1 of them			*
 *				as arguments in the function for solving the sided of an Is tri *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				findingSidesOfIscosceles().									    *
 *																				*
 ********************************************************************************/
void findingSidesOfIscosceles() {
    system("cls");
    double a, p, b;
    cout << endl << endl << endl;
    cout << setw(10) << "" << "FINDING SIDE a OF AN ISOSELES" << endl;
    cout << setw(10) << "" << "--------------------------------------------" << endl;
    cout << setw(15) << "" << "             \n " << endl;
    cout << setw(15) << "" << "           / \\" << endl;
    cout << setw(15) << "" << "          / | \\" << endl;
    cout << setw(15) << "" << "      \\  /  |  \\ / " << endl;
    cout << setw(15) << "" << "        /   |   \\ " << endl;
    cout << setw(15) << "" << "       /    |    \\" << endl;
    cout << setw(15) << "" << "      /     |_    \\" << endl;
    cout << setw(15) << "" << "     /______|_|____\\" << endl;
    cout << setw(15) << "" << "           base        " << endl;

    cout << endl;
    cout << setw(10) << "" << "----------------------------------------------" << endl;
    cout << setw(10) << "" << "Enter the Perimeter of the Triangle: ";
    cin >> p;
    if (p <= 0) {

        while (p <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> p;
        }


    }

    cout << setw(10) << "" << "Enter the Base of the Triangle: ";
    cin >> b;
    if (b <= 0) {

        while (b <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> b;
        }


    }


    a = calcToFindSideofIsosceles(p, b);


    cout << endl;
    cout << setw(10) << "" << "The calculations of side a1 and a2 are: " << a << endl;

    system("pause");

}

double calcforHeightofIsosceles(double a, double b) {
    return sqrt(pow(a, 2) * pow(b, 2) / 4);
}

/********************************************************************************
 *								findingHeightOfIscosceles()	        			*
 *			This function collects 2 user inputs and uses 1 of them		    	*
 *			as arguments in the function for solving the height of an Is tri    *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				findingHeightOfIscosceles().								    *
 *																				*
 ********************************************************************************/
void findingtheHeightofanIsosceles() {
    system("cls");
    double h, a, b;
    cout << endl << endl << endl;
    cout << setw(10) << "" << "FINDING THE HEIGHT OF SIDES a OF AN ISOSELES" << endl;
    cout << setw(10) << "" << "--------------------------------------------" << endl;
    cout << setw(15) << "" << "             \n " << endl;
    cout << setw(15) << "" << "           / \\" << endl;
    cout << setw(15) << "" << "          / | \\" << endl;
    cout << setw(15) << "" << "      \\  /  |  \\ / " << endl;
    cout << setw(15) << "" << "       a/   |   \\ a " << endl;
    cout << setw(15) << "" << "       /    | h  \\" << endl;
    cout << setw(15) << "" << "      /     |_    \\" << endl;
    cout << setw(15) << "" << "     /______|_|____\\" << endl;
    cout << setw(15) << "" << "             b      " << endl;
    cout << endl;
    cout << setw(10) << "" << "----------------------------------------------" << endl;
    cout << setw(10) << "" << "Enter side a of the of the Isosceles triangle";
    cin >> a;
    if (a <= 0) {

        while (a <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> a;
        }


    }

    cout << setw(10) << "" << "Enter the base the of the Isosceles triangle";
    cin >> b;
    if (b <= 0) {

        while (b <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> b;
        }


    }


    cout << endl;

    h = calcforHeightofIsosceles(a, b);

    cout << setw(10) << "" << "The height for the Isosceles triangle is: " << h << endl;

    system("pause");

}



/// This is a little extra if you want to add on the Isosceles Menu.

/********************************************************************************
 *						FindingDegreesUsingSineIsosceles()	                    *
 *				This function collects 2 user inputs and uses 1 of them			*
 *				as arguments in the function Finding the degree using sine      *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				FindingDegreesUsingSineIsosceles().					            *
 *																				*
 ********************************************************************************/

void FindingDegreesUsingSineIsosceles() {
    system("cls");
    double x, opp, hyp;
    cout << endl << endl << endl;
    cout << setw(10) << "" << "FINDING ANGLE B  USING SINE" << endl;
    cout << setw(10) << "" << "--------------------------------------------" << endl;
    cout << setw(15) << "" << "             \n " << endl;
    cout << setw(15) << "" << "           / \\" << endl;
    cout << setw(15) << "" << "          / | \\" << endl;
    cout << setw(15) << "" << "      \\  /  |  \\ / " << endl;
    cout << setw(15) << "" << "       a/   |   \\ hyp " << endl;
    cout << setw(15) << "" << "       /    | opp\\" << endl;
    cout << setw(15) << "" << "      /     |_    \\" << endl;
    cout << setw(15) << "" << "     /_b____|_|__x_\\" << endl;
    cout << setw(15) << "" << "                   " << endl;
    cout << endl;
    cout << setw(10) << "" << "----------------------------------------------" << endl;
    cout << setw(10) << "" << "To find all the degrees of the triangle we need" << endl;
    cout << setw(10) << "" << "To first find x and to do that we will use sin(x)" << endl;
    cout << setw(10) << "" << "and x = arcSine(opp/hyp) to find the degrees" << endl;
    cout << endl;

    cout << setw(10) << "" << "Enter the length of the opposite: ";
    cin >> opp;
    if (opp <= 0) {

        while (opp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> opp;
        }


    }

    cout << setw(10) << "" << "Enter the Length of the hypotnuse: ";
    cin >> hyp;
    if (hyp <= 0) {

        while (hyp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> hyp;
        }


    }

    x = degreeOfangleUsingArcSin(opp, hyp);

    cout << endl;
    cout << setw(10) << "" << "sin(x)= " << opp << "/" << hyp << endl;
    cout << setw(10) << "" << "To have the degree the function has to be x = arcsine(opp/hyp)" << endl;
    cout << setw(10) << "" << "So x = " << x << static_cast<char> (248) << endl;
    cout << setw(10) << "" << "So angle will also be b = " << x << static_cast<char> (248) << endl;
    cout << setw(10) << "" << " x is congruent to b because" << endl;
    cout << setw(10) << "" << "by cutting the isosceles triangle in half you'll get a right triangle " << endl;




    system("pause");







}

/********************************************************************************
 *						FindingDegreesUsingCosineIsosceles()	                *
 *				This function collects 2 user inputs and uses 1 of them			*
 *				as arguments in the function Finding the degree using sine      *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				FindingDegreesUsingCosineIsosceles().					        *
 *																				*
 ********************************************************************************/
void FindingDegreesUsingCosineIsosceles() {
    system("cls");
    double x, adj, hyp;
    cout << endl << endl << endl;
    cout << setw(10) << "" << "FINDING ANGLE B  USING COSINE" << endl;
    cout << setw(10) << "" << "--------------------------------------------" << endl;
    cout << setw(15) << "" << "             \n " << endl;
    cout << setw(15) << "" << "           / \\" << endl;
    cout << setw(15) << "" << "          / | \\" << endl;
    cout << setw(15) << "" << "      \\  /  |  \\ / " << endl;
    cout << setw(15) << "" << "       a/   |   \\ hyp " << endl;
    cout << setw(15) << "" << "       /    |    \\" << endl;
    cout << setw(15) << "" << "      /     |_    \\" << endl;
    cout << setw(15) << "" << "     /_b____|_|__x_\\" << endl;
    cout << setw(15) << "" << "               adj    " << endl;
    cout << endl;
    cout << setw(10) << "" << "----------------------------------------------" << endl;
    cout << setw(10) << "" << "To find all the degrees of the triangle we need" << endl;
    cout << setw(10) << "" << "To first find x and to do that we will use cos(x)" << endl;
    cout << setw(10) << "" << "and x = arcSine(opp/hyp) to find the degrees" << endl;
    cout << endl;

    cout << setw(10) << "" << "Enter the length of the Adjacent: ";
    cin >> adj;
    if (adj <= 0) {

        while (adj <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> adj;
        }


    }

    cout << setw(10) << "" << "Enter the Length of the hypotnuse: ";
    cin >> hyp;
    if (hyp <= 0) {

        while (hyp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> hyp;
        }


    }

    x = degreeOfangleUsingArcCos(adj, hyp);

    cout << endl;
    cout << setw(10) << "" << "sin(x)= " << adj << "/" << hyp << endl;
    cout << setw(10) << "" << "To have the degree the function has to be x = arcCos(opp/hyp)" << endl;
    cout << setw(10) << "" << "So x = " << x << static_cast<char> (248) << endl;
    cout << setw(10) << "" << "So angle will also be b = " << x << static_cast<char> (248) << endl;
    cout << setw(10) << "" << " x is congruent to b because" << endl;
    cout << setw(10) << "" << "by cutting the isosceles triangle in half you'll get a right triangle " << endl;




    system("pause");







}

/********************************************************************************
 *						FindingDegreesUsingTanIsosceles()	                    *
 *				This function collects 2 user inputs and uses 1 of them			*
 *				as arguments in the function Finding the degree using sine      *
 *																				*
 *				Precondition: Collects user input for arguments					*
 *																				*
 *				Postcondition: Returns value for sides with helper function		*
 *				FindingDegreesUsingTanIsosceles().					            *
 *																				*
 ********************************************************************************/
void FindingDegreesUsingTanIsosceles() {
    system("cls");
    double x, opp, adj;
    cout << endl << endl << endl;
    cout << setw(10) << "" << "FINDING ANGLE B  USING COSINE" << endl;
    cout << setw(10) << "" << "--------------------------------------------" << endl;
    cout << setw(15) << "" << "             \n " << endl;
    cout << setw(15) << "" << "           / \\" << endl;
    cout << setw(15) << "" << "          / | \\" << endl;
    cout << setw(15) << "" << "      \\  /  |  \\ / " << endl;
    cout << setw(15) << "" << "       a/   |   \\     " << endl;
    cout << setw(15) << "" << "       / opp|    \\" << endl;
    cout << setw(15) << "" << "      /     |_    \\" << endl;
    cout << setw(15) << "" << "     /_b____|_|__x_\\" << endl;
    cout << setw(15) << "" << "               adj    " << endl;
    cout << endl;
    cout << setw(10) << "" << "----------------------------------------------" << endl;
    cout << setw(10) << "" << "To find all the degrees of the triangle we need" << endl;
    cout << setw(10) << "" << "To first find x and to do that we will use Tan(x)" << endl;
    cout << setw(10) << "" << "and x = arcTan(opp/adj) to find the degrees" << endl;
    cout << endl;

    cout << setw(10) << "" << "Enter the length of the Adjacent: ";
    cin >> opp;
    if (opp <= 0) {

        while (opp <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> opp;
        }


    }

    cout << setw(10) << "" << "Enter the Length of the hypotnuse: ";
    cin >> adj;
    if (adj <= 0) {

        while (adj <= 0) {

            cout << setw(10) << "" << "No Negatives!!! Please try again: ";
            cin >> adj;
        }


    }

    x = degreeOfangleUsingArcTan(opp, adj);

    cout << endl;
    cout << setw(10) << "" << "sin(x)= " << opp << "/" << adj << endl;
    cout << setw(10) << "" << "To have the degree the function has to be x = arcTan(opp/adj)" << endl;
    cout << setw(10) << "" << "So x = " << x << static_cast<char> (248) << endl;
    cout << setw(10) << "" << "So angle will also be b = " << x << static_cast<char> (248) << endl;
    cout << setw(10) << "" << " x is congruent to b because" << endl;
    cout << setw(10) << "" << "by cutting the isosceles triangle in half you'll get a right triangle " << endl;




    system("pause");







}

void calcDistanceRIGHT() {

    double x1, y1,
            x2, y2, 
            x3, y3,
            side_A,
            side_B,
            side_C;
    
    clearScreen();

    cout << "\n\n\n";

    cout << setw(25) << "" << " CALCULATING DISTANCE" << endl;
    cout << setw(10) << "" << "----------------------------------------" << endl << endl;
    cout << setw(10) << "" << "To find the distance between two " << endl;
    cout << setw(10) << "" << "points we need 4 coordinates" << endl;
    cout << setw(10) << "" << "       (X1, Y1)    " << endl;
    cout << setw(10) << "" << "          |\\     " << endl;
    cout << setw(10) << "" << "          | \\   " << endl;
    cout << setw(10) << "" << "          |  \\   " << endl;
    cout << setw(10) << "" << "          |   \\  " << endl;
    cout << setw(10) << "" << "          |    \\      " << endl;
    cout << setw(10) << "" << "          |     \\      " << endl;
    cout << setw(10) << "" << "          |      \\        " << endl;
    cout << setw(10) << "" << "          |       \\       " << endl;
    cout << setw(10) << "" << "          |        \\      " << endl;
    cout << setw(10) << "" << "          |_        \\     " << endl;
    cout << setw(10) << "" << " (X3, Y3) |_|________\\  (X2, Y2)" << endl << endl;
    cout << setw(10) << "" << "----------------------------------" << endl << endl;
    cout << setw(10) << "" << "Side A" << endl;

    cout << setw(10) << "" << "Enter X: ";

    cin >> x1;

    cout << setw(10) << "" << "Enter Y: ";

    cin >> y1;

    cout << "\n" << setw(10) << "" << "Side B" << endl;

    cout << setw(10) << "" << "Enter Point 1: ";

    cin >> x2;

    cout << setw(10) << "" << "Enter Point 2: ";

    cin >> y2;

    cout << "\n" << setw(10) << "" << "Side C" << endl;

    cout << setw(10) << "" << "Enter Point 1: ";

    cin >> x3;

    cout << setw(10) << "" << "Enter Point 2: ";

    cin >> y3;

    side_A = distanceFormula(x1, x2, y1, y2);

    side_B = distanceFormula(x2, x3, y2, y3);

    side_C = distanceFormula(x1, x3, y1, y3);

    cout << endl;

    cout << setw(10) << "" << "Applying the Distance Formula..." << endl;

    cout << setw(10) << "" << "Side A = " << side_A << endl;

    cout << setw(10) << "" << "Side B = " << side_B << endl;

    cout << setw(10) << "" << "Side C = " << side_C << endl << endl;
}

/********************************************************************************
 *								  radToDeg()									*
 *				This function converts radians to degrees by multiplying by 180 *
 *				then dividing by PI												*
 *																				*
 *				Precondition: This function uses a double as its argument.		*
 *																				*
 *				Postcondition: This function returns the conversion of angle	*
 *				to radians.														*
 *																				*
 ********************************************************************************/
double radToDeg(double rad) {
    return (rad * 180) / PI;
}
