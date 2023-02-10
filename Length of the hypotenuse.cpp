/*
The length of the hypotenuse of a right-angled triangle is the
square root of the sum of the squares of the other two sides. 
Write a function calcH that accepts two doubles as function arguments
and returns a double. Prompt the user for the length of base and
the perpendicular side of the triangle. Use the pow and sqrt functions from 
cmath to perform the calculations.

PSEUDOCODE:
START
1. Get value of base length from user.
2. Get value of perpendicular height from user.
3. Assign hypotenuse to calcH.
4. Display value of hypotenuse to user.
END
*/
#include<iostream>
#include<cmath>
using namespace std;

// Define function.
double calcH(double length, double height)
{
    double ans;
    ans = sqrt(pow(length,2) + pow(height,2));
    return ans;
}

int main()
{
    // User input variables.
    double base, perpendicular_side;

    // User output variables.
    double hypotenuse;
    cout << "\t\tHypotenuse of a right-angled traingle.\n\n";
    cout << "Enter the length of base? ";
    cin >> base;

    cout << "Enter the perpendicular of perpendicular side of ";
    cout << "the triangle? ";
    cin >> perpendicular_side;

    hypotenuse = calcH(base, perpendicular_side);

    // Display to the user.
    cout << "Length of the hypotenuse = " << hypotenuse;
    return 0;
}