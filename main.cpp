#include <iostream>
using namespace std;

int main()
{

    //Declare int variables
    int numberOfBottles = 0;

    //Declare double variables
    double pricePerBottle = 0.0,totalPrice = 0.0;

    //Declare Tax Constant variable
    static double TAX = 1.08;

    //display to the screen please input shampoo bottles quantity
    cout << "Please enter the count of the shampoo bottles: ";

    //user inputs number of bottles
    cin >> numberOfBottles;

    //display to the screen please input cost per bottle in dollars
    cout << "Please enter the price of each shampoo bottle (in dollars): ";

    //user inputs price per bottle
    cin >> pricePerBottle;

    //The "magic formula" to give us 2 decimal points
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //calculates total price
    totalPrice = numberOfBottles * pricePerBottle * TAX;

    //display the total price of the bottles
    cout << "The total price is: $" << totalPrice << endl;

    return 0;

}
/*
Name        : homework-4b
Arguments   : int numberOfBottles
              double pricePerBottle, totalPrice
              static double TAX
Return      : 0
Definition  : This function calculates total price of bottles
*/
