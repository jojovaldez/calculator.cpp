#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    //Declare Enumeration with Controls
    enum {Add, Substract, Multiply, Divide, Square_Root, Remainder, Power};

    //Declare Variables
    string initialChoice;


    //Introdcution
    cout << "       +--------------------------+       " << endl;
    cout << "       |         Welcome!         |       " << endl;
    cout << "       |    to the Calculator     |       " << endl;
    cout << "       |     By: Jojo Valdez      |       " << endl;
    cout << "       +--------------------------+       " << endl;

    //Ask if User Wishes to Enter Calculations
    cout << "Would you like to do a calculation? ('Y' = Yes & 'N' = No) ";
    cin >> initialChoice; cout << endl;

    //In-Valid Input
    if(initialChoice != 'Y' || initialChoice != 'N') {
        cout << "Invalid Choice."
    }

    //If-User Enters No
    if (initialChoice == 'N')


    //While Statement to Keep Calculations Going
    while (initialChoice == 'Y') {

    }
    
    //Menu for Options
    


    return 0;
}