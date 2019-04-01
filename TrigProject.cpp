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
 *****************************************************************************/

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <regex>
#include <limits>

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

int main() {

    int choice,
        triangleChoice;

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
                dummyMessage();
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
