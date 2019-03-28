/****************************************************************************
 *                          Trigonometry 2019                               *
 *                   Main Group Project Spring Class                        *
 *                                                                          *
 *      This program is an exploration of trigonometry from the prospect    *
 *      of a right angle triangle, law of Cosine and the usage of the       *
 *      distance formula.                                                   *
 *                                                                          *
 *      @Author:    Ines Campos			                                    *
 *      @Created:   March 25, 2019                                          *
 ***************************************************************************/

#include <iostream>
#include <iomanip>
#include <regex>
#include <limits>

using namespace std;

///Function Protypes Framework
void intro();
void mainMenu();
void subMenu();
int  getChoice();
int  getSubChoice();
void goodbyeMessage();


void checkDouble(string &);
void checkDoubleMinus(string &);
void checkInt(string &);
void checkChar(string &);

int main()
{
	int choice, subChoice;
	

	do {
		mainMenu();

		choice = getChoice();

		if (choice != 4) {
			switch (choice) {

			case 1:
				do {
					subMenu();

					subChoice = getSubChoice();

					if (choice != 4) {
						switch (subChoice) {

						case 1:
							exploreSin();
							break;
						case 2:
							exploreCos();
							break;

						case 3:
							exploreTan();
							break;

						default:
							break;
						}
					}

				} while (choice != 4);
				
				cin.ignore(numeric_limits<int>::max(), '\n');

				break;

			case 2:
				printLawOfCosine();
				break;

			case 3:
				printDistFormulaLawCosine();
				break;

			default:
				break;
			}
		}

	} while (choice != 4);


	goodbyeMessage();

	return 0;
}

void goodbyeMessage() {

	cout << "\n\n\n";
	cout << setw(10) << "" << "Thanks for using the Program, Goodbye\n\n";
	cout << setw(10) << "" << "Press any key to continue . . .\n\n";
	cin.ignore();
	cin.get();


void intro(){
	cout << setw(15) << "" << "WELCOME TO TRIG 2019 Ver. 2.0.0\n";
	cout << setw(10) << "" << "___________________________________________\n";

	cout << "\n\n\n\n";

	cout << setw(15) << "" << "       000000000000		000000000000			\n";
	cout << setw(15) << "" << "	    0000000000000000	      0000000000000000			\n";
	cout << setw(15) << "" << "	   000000000000000000	     000000000000000000			\n";
	cout << setw(15) << "" << "	  00000000000000000000	    00000000000000000000		\n";
	cout << setw(15) << "" << "	 0000000000000000000000	   0000000000000000000000		\n";
	cout << setw(15) << "" << "	000000000000000000000000  000000000000000000000000		\n";
	cout << setw(15) << "" << "0000000000000000000000000000000000000000000000000000		\n";
	cout << setw(15) << "" << "000000000000000                       00000000000000		\n";
	cout << setw(15) << "" << "	00000000000000     Kyle Bibeault     0000000000000		\n";
	cout << setw(15) << "" << "	  000000000000     Theodis Brown     00000000000		\n";
	cout << setw(15) << "" << "	    0000000000     Ines Campos	     000000000			\n";
	cout << setw(15) << "" << "	      00000000     Chris Flores      0000000			\n";
	cout << setw(15) << "" << "	        000000     Luis Rodriguez    00000				\n";
	cout << setw(15) << "" << "	          0000                       000				\n";
	cout << setw(15) << "" << "	            00000000000000000000000000					\n";
	cout << setw(15) << "" << "	              0000000000000000000000					\n";
	cout << setw(15) << "" << "	                000000000000000000						\n";
	cout << setw(15) << "" << "	                   0000000000000						\n";
	cout << setw(15) << "" << "	                     000000000							\n";
	cout << setw(15) << "" << "	                       00000							\n";
	cout << setw(15) << "" << "	                         0								\n";
	cout << setw(10) << "" << "\nPress any ket to continue . . .\n";


}


void mainMenu(){

	system("cls");

	cout << "\n\n\n";
	cout << setw(10) << "" << "	 TRIGONOMETRY VERSION 2.0.0\n";
	cout << setw(10) << "" << "___________________________________________\n";

	cout << setw(10) << "" << "1. Right Angle Trigonometry\n";
	cout << setw(10) << "" << "2. Law of Cosine\n";
	cout << setw(10) << "" << "3. Distance Formula and Law of Cosine\n";
	cout << setw(10) << "" << "4. Exit program\n\n";

	cout << setw(10) << "" << "Enter your Choice: ";
	}


void subMenu() {

	system("cls");

	cout << "\n\n\n";
	cout << setw(10) << "" << " Right Angle Calculations\n";
	cout << setw(10) << "" << "____________________________________________\n";
	cout << setw(10) << "" << "If we know the size of angle A in a right"
							  "angle triangle and one of the three other "
						   	  "sides, then we can find all the values of "
							  "the triangle."
							  "Likewise, if we know two sides of a right "
							  "angle triangle, we can find all the other"
							  "values of the triangle\n";
	cout << setw(10) << "" << "____________________________________________\n";

	cout << setw(20) << "" << "To Explore sin: Press 1\n";
	cout << setw(20) << "" << "To Explore cos: Press 2\n";
	cout << setw(20) << "" << "To Explore tan: Press 3\n";
	cout << setw(20) << "" << "To Exit		 : Press 4\n\n";

	cout << setw(10) << "" << "Enter your Choice: ";
}


int getChoice() {

	string strChoice;
	cin >> strChoice;
	checkInt(strChoice);

	return stoi(strChoice);
	}

int getSubChoice() {

	string strSubChoice;
	cin >> strSubChoice;
	checkInt(strSubChoice);

	return stoi(strSubChoice);

}

/****************************************************************************
 *                    FUNCTION DESCPRIPTION checkDouble()                   *
 *      This function takes a floating point number as a string and use the *
 *      string to check if the entered floating point matches the language  *
 *      defined for a positive floating point number. If not, ask the user  *
 *      to re-enter a valid input.                                          *
 *                                                                          *
 *      @Precondition:  This function takes a string argument as reference  *
 *                      to be matched with a defined language for a positive*
 *                      floating point number.                              *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void checkDouble(string &s) {
	regex myDouble("^(0|([1-9][0-9]*))(\\.[0-9]+)?$");
	while (!(regex_match(s, myDouble))) {
		cout << setw(10) << "" << "Wrong Input. Enter a Positive"
			"Decimal Number. Re-Enter: ";
		cin >> s;
		if (regex_match(s, myDouble)) {
			break;
		}
	}
}

/****************************************************************************
 *                  FUNCTION DESCRIPTION checkDoubleMinus()                 *
 *                                                                          *
 *      This function takes a floating point number as a string and use the *
 *      string to check if the entered floating point matches the language  *
 *      defined for a any floating point number. If not, ask the user to    *
 *      re-enter a valid input.                                             *
 *                                                                          *
 *      @Precondition:  This function takes a string argument as reference  *
 *                      to be matched with a defined language for any       *
 *                      floating point numbers.                             *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void checkDoubleMinus(string &s) {
	regex myDouble("^(-?)(0|([1-9][0-9]*))(\\.[0-9]+)?$");
	while (!(regex_match(s, myDouble))) {
		cout << setw(10) << "" << "Wrong Input. Enter a Decimal Number for "
			"the coordinate. Re-Enter: ";
		cin >> s;
		if (regex_match(s, myDouble)) {
			break;
		}
	}
}

/****************************************************************************
 *                    FUNCTION DESCRIPTION checkChar()                      *
 *                                                                          *
 *      This function takes a character as a string and use the string to   *
 *      check if the entered character matches the language defined for the *
 *      characters defined in the function. If not, ask the user to re-enter*
 *      a valid input.                                                      *
 *                                                                          *
 *      @Precondition:  This function takes a string argument as reference  *
 *                      to be matched with a defined language for a positive*
 *                      floating point number                               *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void checkChar(string &s) {
	regex myChar("^[a-c]?$");
	while (!(regex_match(s, myChar))) {
		cout << setw(10) << "" << "Wrong Input. Enter a/b,c only. please"
			"Re-Enter: ";
		cin >> s;
		if (regex_match(s, myChar)) {
			break;
		}
	}
}

/****************************************************************************
 *                    FUNCTION DESCRIPTION checkInt()                       *
 *                                                                          *
 *      This function takes an integer number as a string and use the       *
 *      string to check if the entered integer matches the language defined *
 *      for an integer. If not, ask the user to re-enter a valid input      *
 *                                                                          *
 *      @Precondition:  This function takes a string argument as reference  *
 *                      to be matched with a defined language for a positive*
 *                      floating point number                               *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void checkInt(string &s) {
	regex myChar("^[1-4]?$");
	while (!(regex_match(s, myChar))) {
		cout << setw(10) << "" << "Wrong Input. Enter 1 - 4 only. please"
			"Re-Enter: ";
		cin >> s;
		if (regex_match(s, myChar)) {
			break;
		}
	}
}
