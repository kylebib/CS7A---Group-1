/*******************************************************************************
*                                                                              *
*             Exercise: 05 Winning Division                                    *
*                                                                              *
*             Description: In this Program I'm going to ask the user to        *
*                           Input the quarterly grossing of each division      *
*                          NorthEast, NorthWest, SouthEast and SouthWest       *
*                          and then it will notify the user the which          *
*                          Division was the highest grossing.                  *
*                                                                              *
*             @Arthor: Luis Rodriguez                                          *
*             @created: 03/20/2019                                             *
*                                                                              *
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

///Function Prototypes
double getSales(string str);
void findHighest(double eat , double free, double tree, double why);


int main()
{
      double northE,
             northW,
             southE,
             southW;

        /// these bellow are call functions of each devisions.

        southE = getSales("Southeast");
        southW = getSales("Southwest");
        northW = getSales("Northwest");
        northE = getSales("Northeast");

        /// Call function findHighest passing the
        /// four divisions sales totals
        findHighest(northE, southE, northW, southW);

    return 0;
}


/*******************************************************************************
*                                                                              *
*                  Winning Circle: Function name getSales                      *
*                                                                              *
*      This Function asks the user to input the Division's quarterly sales     *
*                                                                              *
*                                                                              *
*       precondition: This Function takes an string theDivision as argument    *
*                                                                              *
*                                                                              *
*       Postcondition: The Function returns a double theSales                  *
*******************************************************************************/
double getSales(string theDivision)
{
    double theSales;

    /// do while loop to read the input divisions
    do
    {
        ///top margin
        cout << endl << endl << endl;

        ///Header File to input the sales using cin.
        cout << setw(10) << "" << "What's the sale for the " << theDivision
            << " Division's quarterly sale: $";
        cin >> theSales;

        ///if statement to watch out for any divisions by zero
        if(theSales <= 0)
        {
        cout << endl;
        cout << setw(10) << ""
             << "ERROR!!!! sales can't be division by zero, Please Try Again."
             << endl;
        }

    }while (!(theSales >= 0.00));

    return theSales;
}


/*******************************************************************************
*                                                                              *
*                    Winning Circle: function findHighest                      *
*                                                                              *
*      This Function  i used if else if statement to determine which Division  *
*      is the highest and will print out the highest grossing depending        *
*      which division was the highest.                                         *
*                                                                              *
*       precondition: This Function takes four doubles southE, southW, northE  *
*                     and northW as an argument                                *
*                                                                              *
*       Postcondition: The Function returns nothing cause its a void           *
*******************************************************************************/
void findHighest(double northE, double southE, double northW, double southW)
{
        /// using set precision to have the numbers to the 3 decimal places
        cout << fixed << showpoint << setprecision(3);
        double highestGross;

        cout << endl << endl;
        cout << setw(10) << "" << "The Highest grossing division is the ";


        if (northE > southE && northE > northW && northE > southW)
        {
                highestGross = northE;
                cout << "NorthEast ";
        }
        else if (southE > northE && southE > northW && southE > southW)
        {
                highestGross = southE;
                cout << "SouthEast ";
        }
        else if (northW > southE && northW > northE && northW > southW)
        {
                highestGross = northW;
                cout << "NorthWest ";
        }

        else if (northE == southE && northW == northE && northE == southW)
        {
       cout << "nothing because the the grossing is the same for all divisions."
            << endl;
                exit(0);
        }

        else
        {
                highestGross = southW;
                cout << "SouthWest ";
        }

        ///Prints out the highest grossing of the division
        cout << "division with $" << highestGross << " in sales";
        cout << endl << endl << endl;
}



