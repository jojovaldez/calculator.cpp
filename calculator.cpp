#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    //Declare Enumeration with Controls
    enum {Add, Substract, Multiply, Divide, Square_Root, Remainder, Power};

    //Declare Variables
    string initialChoice;
    float numberOne;
    float secondNumber;


    //Introdcution
    cout << "       +----------------------------+       " << endl;
    cout << "       |         Welcome to         |       " << endl;
    cout << "       |    the Basic Calculator    |       " << endl;
    cout << "       |      By: Jojo Valdez       |       " << endl;
    cout << "       +----------------------------+       " << endl;
    cout << "Rules: This calculator will only provide basic calculations of addition, subtraction, multiplication, division, " << endl;
    cout << "       square root, remainder, and power of two numbers." << endl;

    //Ask if User Wishes to Enter Calculations
    cout << "Would you like to do a calculation? ('Y' = Yes & 'N' = No) ";
    cin >> initialChoice; 

    //In-Valid Input
    if(initialChoice != "Y" && initialChoice != "N") {
        cout << "Invalid Choice. Please eneter Y or N (cap sensitive)" << endl;
        cout << "Please Enter Again: ";
        cin >> initialChoice; cout << endl;
    }

    //If-User Enters No
    if (initialChoice == "N") {
        cout << "Thank You for Visiting Jojo's Calculator." << endl;
        cout << "Have a Good Day." << endl;
    }


    //While Statement to Keep Calculations Going
    while (initialChoice == "Y") {
    //Ask for Users Input
    cout << "Enter the First Number: ";
    cin >> numberOne;

    cout << "Enter the Second Number: ";
    cin >> secondNumber;
    
    //Menu for Options
    


    return 0;
}