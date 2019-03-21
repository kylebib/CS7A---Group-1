/****************************************************************************
 *                      PLAB5: Group Project 1                              *
 *                                                                          *
 *      This program is a menu driven program that is performing file       *
 *      operations in different ways.                                       *
 *                                                                          *
 *      @Author:    Steinar Johansen                                        *
 *      @Created:   March 20, 2019                                          *
 ***************************************************************************/

// Preprocessor Directives (Header Files)
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <limits>

using namespace std;

// Function prototypes framework
void myMenu();
int getChoice();
void dummyMessage();

// Program Specific function prototypes
void writeNamesToFile(ofstream &);
void readNamesFromFiles(ifstream &);
char randToChar(int);
void writeRandomCharsToFile(ofstream &);
void countVowels(ifstream &, int &, int &, int &, int &, int &);
void printVowelCount(int, int, int, int, int);
int charToInt(char);
int charNumToNum(char);
void printSumOfNum(ifstream &);

int main()
{

    srand(time(NULL));
    ifstream    inFile;
    ofstream    outFile;

    int         choice;
    int         count_A = 0, count_E = 0, count_I = 0, count_O = 0, count_U = 0;

    return 0;
}

/****************************************************************************
 *                 Function Description: myMenu()                           *
 *                                                                          *
 *      when this function is called, the function is responsible for       *
 *      clearing the console window add three line shift top margin before  *
 *      header and menu is displayed. It is also responsible for prompting  *
 *      the user to enter a choice. The function is also providing a ten    *
 *      space left margin.                                                  *
 *                                                                          *
 *      @Precondition:   This function does not take any arguments.         *
 *      @Postcondition:  This function does not return anything             *
 ***************************************************************************/
void myMenu(){

}

/****************************************************************************
 *                 Function Description: getChoice()                        *
 *                                                                          *
 *      when this function is called, the function shall collect the users  *
 *      input related to the menu options.                                  *
 *      You have to apply a strong input validation to the input before the *
 *      the integer is returned from the function.                          *
 *                                                                          *
 *      @Precondition:   This function does not take any arguments.         *
 *      @Postcondition:  This function returns an integer that reflects the *
 *                       possible choices in the menu.                      *
 ***************************************************************************/
int getChoice(){

}

/****************************************************************************
 *                 Function Description: dummyMessage()                     *
 *                                                                          *
 *      when this function is called, the function clears the console       *
 *      window, provides a three line shift header and then displays a      *
 *      dummy message that has a ten spaces left margin. Also, the function *
 *      provides a pause where the user has to press any key to continue    *
 *                                                                          *
 *      @Precondition:   This function does not take any arguments.         *
 *      @Postcondition:  This function does not return anything.            *
 ***************************************************************************/
void dummyMessage(){

}

/****************************************************************************
 *               Function Description: writeNamesToFile()                   *
 *                                                                          *
 *      when this function is called, the function clears the console       *
 *      window, provides a three line shift header and open a stream object *
 *      so names can be written to a file. The function also checks if the  *
 *      stream was opened. Then names are written to a file and a sentinel  *
 *      is being used to end the list of names. The stream is then closed   *
 *      and a message about press any key to continue is presented.         *
 *                                                                          *
 *      @Precondition:   This function takes an ofstream object as a        *
 *                       reference argument.                                *
 *      @Postcondition:  This function does not return anything.            *
 ***************************************************************************/
void writeNamesToFile(ofstream &out){

}

/****************************************************************************
 *               Function Description: readNamesFromFile()                  *
 *                                                                          *
 *      when this function is called, the function clears the console       *
 *      window, provides a three line shift header and open a stream object *
 *      so data can be read from a file. The function also checks if the    *
 *      stream was opened. Then names are read from the file and presented  *
 *      formatted to the console window.                                    *
 *                                                                          *
 *      @Precondition:   This function takes an ifstream object as a        *
 *                       reference argument.                                *
 *      @Postcondition:  This function does not return anything.            *
 ***************************************************************************/
void readNamesFromFiles(ifstream &in){

}

/****************************************************************************
 *                  Function Description: randToChar()                      *
 *                                                                          *
 *      when this function is called, the function converts an integer to a *
 *      char.                                                               *
 *                                                                          *
 *      @Precondition:  This function takes an integer as argument to be    *
 *                      converted to a char                                 *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
char randToChar(int num){

}

/****************************************************************************
 *              Function Description: writeRandomCharsToFile()              *
 *                                                                          *
 *      when this function is called, the function will will generate 1000  *
 *      characters with ASCII values between 32 and 255 included and write  *
 *      those characters to a file. The characters are randomly generated   *
 *      with a random generator that generate numbers between between 32    *
 *      and 255, and then call the function randToChar to convert it to a   *
 *      char before it is written to file.                                  *
 *                                                                          *
 *      @Precondition:  This function takes an ofstream as a reference      *
 *                      argument.                                           *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void writeRandomCharsToFile(ofstream &out){

}

/****************************************************************************
 *                  Function Description: countVowels()                     *
 *                                                                          *
 *      when this function is called, the function will count the number of *
 *      vowels in a file containing characters.                             *
 *      This function does not present anything to the console but it make  *
 *      the text file is opened, checked that it was actually opened and    *
 *      then count the number of each vowels in the file.                   *
 *      The function will count a vowel whether it is lower or upper case.  *
 *                                                                          *
 *      @Precondition:  This function takes takes six reference variables   *
 *                      as arguments. Those are the ifstream object used    *
 *                      to open the input file stream and then five         *
 *                      integer reference variables used as counters of the *
 *                      different vowels in a text file.                    *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void countVowels(ifstream &in, int &aA, int &eE, int &iI, int &oO, int &uU){

}

/****************************************************************************
 *                  Function Description: printVowelCount()                 *
 *                                                                          *
 *      when this function is called, the function will print to console a  *
 *      table that represents the number of vowels in a text file.          *
 *      The function will clear the console window before it prints out the *
 *      top margin. Then a header is printed out before the table itself    *
 *      is printed out. Finally we need to halt the program so we can see   *
 *      the table. Press any key information is used to halt the program    *
 *                                                                          *
 *      @Precondition:  This function takes five integer arguments used to  *
 *                      print in the table that is being printed out        *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void printVowelCount(int aA, int eE, int iI, int oO, int uU){

}

/****************************************************************************
 *                  Function Description: charNumToNum()                    *
 *                                                                          *
 *      when this function is called, the function will convert a character *
 *      number to an integer.                                               *
 *                                                                          *
 *      @Precondition:  This function takes one char as argument used to be *
 *                      converted to an integer number between 0 - 9        *
 *      @Postcondition: This function returns an integer between 1 - 9.     *
 ***************************************************************************/
int charNumToNum(char ch){

}

/****************************************************************************
 *                 Function Description: printSumOfNum()                    *
 *                                                                          *
 *      when this function is called, the function will sum up all the      *
 *      digits in a text file.                                              *
 *      The function opens an input stream and read characters from the     *
 *      file. if the character is a number, use the charNumToNum function   *
 *      to convert the number to an integer.                                *
 *      Then the function will print out a formatted table to the console   *
 *      to indicate the sum of all the digits in the file                   *
 *                                                                          *
 *      @Precondition:  This function takes an ofstream as a reference      *
 *                      argument.                                           *
 *      @Postcondition: This function does not return anything.             *
 ***************************************************************************/
void printSumOfNum(ifstream &in){

}
