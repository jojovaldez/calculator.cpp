#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main () {
    //Declare Enumeration with Controls
    enum {Add = 1, Substract, Multiply, Divide, Remainder, Square_Root, Power};

    //Declare Variables
    string initialChoice;
    double numberOne;
    double numberTwo;
    int userCalculation;
    float results;
    int remainderOne;
    int remainderTwo;


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
    while(initialChoice != "Y" && initialChoice != "N") {
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
        cout << "Choose An Operation Below:" << endl; cout << endl;
        //Menu for Options
        cout << "Operations: " << endl;
        cout << "1) Addition" << endl;
        cout << "2) Subtraction" << endl;
        cout << "3) Multiplication" << endl;
        cout << "4) Division" << endl;
        cout << "5) Remainder" << endl;
        cout << "6) Square Root" << endl;
        cout << "7) Power (first number to second number)" << endl; cout << endl;
        cout << "Pick Your Operation: " << endl;
        cin >> userCalculation;

        switch (userCalculation) {
            case Add:
                //Ask for Users Input
                cout << "Enter the First Number: ";
                cin >> numberOne;
                cout << "Enter the Second Number: ";
                cin >> numberTwo;
                cout << endl;
                //Calculation
                results = numberOne + numberTwo;
                cout << "You Choose Addition" << endl;
                cout << numberOne << " + " << numberTwo << " = " << results << endl;
                cout << "Final Result: " << results << endl; cout << endl;
                break;
            
            case Substract:
                //Ask for Users Input
                cout << "Enter the First Number: ";
                cin >> numberOne;
                cout << "Enter the Second Number: ";
                cin >> numberTwo;
                cout << endl;
                //Calculations
                results = numberOne - numberTwo;
                cout << "You Choose Subtraction" << endl;
                cout << numberOne << " - " << numberTwo << " = " << results << endl;
                cout << "Final Result: " << results << endl; cout << endl;
                break; 

            case Multiply:
                //Ask for Users Input
                cout << "Enter the First Number: ";
                cin >> numberOne;
                cout << "Enter the Second Number: ";
                cin >> numberTwo;
                cout << endl;
                //Calculations
                results = numberOne * numberTwo;
                cout << "You Choose Multiplication" << endl;
                cout << numberOne << " * " << numberTwo << " = " << results << endl;
                cout << "Final Results: " << results << endl; cout << endl;
                break;

            case Divide:
                //Ask for Users Input
                cout << "Enter the First Number: ";
                cin >> numberOne;
                cout << "Enter the Second Number: ";
                cin >> numberTwo;
                cout << endl;
                //Calculation
                results = numberOne / numberTwo;
                cout << "You Choose Division" << endl;
                cout << numberOne << " / " << numberTwo << " = " << results << endl;
                cout << "Final Result: " << results << endl; cout << endl;
                break;

            case Remainder:
                //Ask for Users Input
                cout << "Enter the Main Number: ";
                cin >> remainderOne;
                cout << "Enter the Divisor Number: ";
                cin >> remainderTwo;
                cout << endl;
                //Calculation
                results = remainderOne % remainderTwo;
                cout << "You Choose Remainder" << endl;
                cout << numberOne << " % " << numberTwo << " = " << results << endl;
                cout << "Final Result: " << results << endl; cout << endl;
                break;

            case Square_Root: 
                //Ask for User Input
                cout << "Enter the Number for the Square Root: ";
                cin >> numberOne;
                cout << endl;
                //Calculation
                results = sqrt(numberOne);
                cout << "You Choose Square Root" << endl;
                cout << "The Square Root of " << numberOne << " = " << results << endl;
                cout << "Final Result: " << results << endl; cout << endl;
                break;

            case Power:
                //Ask for User Input
                cout << "Enter the First Number: ";
                cin >> numberOne;
                cout << "Enter the Second Number: ";
                cin >> numberTwo;
                //Calculation
                results = pow(numberOne, numberTwo);
                cout << "You Choose Power" << endl;
                cout << numberOne << " To the Power of " << numberTwo << " = " << results << endl;
                cout << "Final Result: " << results << endl; cout << endl;
                break;

            default:
                cout << "Invalid Input! Enter the number for one of the menu options." << endl;
                cout << "Ex: Enter: 1 for Addition" << endl; cout << endl;
                break;
        }

         //Ask for Continuation:
        cout << "Would you like to do a another calculation? ('Y' = Yes & 'N' = No) ";
        cin >> initialChoice; 

        //In-Valid Input
        while(initialChoice != "Y" && initialChoice != "N") {
            cout << "Invalid Choice. Please eneter Y or N (cap sensitive)" << endl;
            cout << "Please Enter Again: ";
            cin >> initialChoice; cout << endl;
        }

        //If-User Enters No
        if (initialChoice == "N") {
            cout << "Thank You for Visiting Jojo's Calculator." << endl;
            cout << "Have a Good Day." << endl;
        }
    }

    return 0;
}