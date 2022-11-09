// PROGRAM: SOFTWARE SALES.CPP
// AsMajita software company sells a package that retails for R99
// This program asks for the number of units sold and computes
// the total cost of the purchase.
// Written by Ricky.
// Last Modification: 2022/11/04 
/*
    PSEUDOCODE:
    START
    INPUT
    Get from user the number of units sold.
    PROCESS
    IF/ELSE 
        Number of units is greater than 0?
            YES
                Compute the discount amount? 
                IF/ELSE IF
                    0% discount.
                        YES
                            Calculate the total cost of the purchase.
                            END.
                    20% discount.
                        YES
                            Calculate the total cost of the purchase.
                            END.
                    30% discount.
                        YES
                            Calculate the total cost of the purchase.
                            END.
                    40% discount.
                        YES
                            Calculate the total cost of the purchase.
                            END.
                    50% discount.
                        YES
                            Calculate the total cost the purchase.
                            END.
                IF/ELSE IF
            NO
                Display invalid number of unit.
                END.
    IF/ELSE
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // INPUT
    double retail_price; 
    int num_of_units;
    cout << "\t\tWelcome! Welkom! Sawubona!\n\n";

    cout << "Enter the retail price? R";
    cin >> retail_price;
    cout << "Enter the number of units sold? ";
    cin >> num_of_units;
    cout << " " << endl;

    // PROCESS
    cout << fixed << showpoint << setprecision(2);
    if (num_of_units > 0)
    {
        if (num_of_units <= 9)
        {
            double total_cost;
            total_cost = num_of_units * retail_price;
            cout << "\t\t0%" <<  " discount\n\n";
            cout << "total cost = R" << total_cost << endl;
        }     
        else if (10 <= num_of_units && num_of_units <= 19)
        {
            double total_cost, discount;
            total_cost = num_of_units * retail_price;
            discount = total_cost * (20.0 / 100.0);
            total_cost = total_cost - discount;
            cout << "\t\t20%" <<  " discount\n\n";
            cout << "total cost = R" << total_cost << endl;        
        }
        else if (20 <= num_of_units && num_of_units <= 49)
        {
            double total_cost, discount;
            total_cost = num_of_units * retail_price;
            discount = total_cost * (30.0 / 100.0);
            total_cost = total_cost - discount;
            cout << "\t\t30%" <<  " discount\n\n";
            cout << "total cost = R" << total_cost << endl; 
        }
        else if (50 <= num_of_units && num_of_units <= 99)
        {
            double total_cost, discount;
            total_cost = num_of_units * retail_price;
            discount = total_cost * (40.0 / 100.0);
            total_cost = total_cost - discount;
            cout << "\t\t40%" <<  " discount\n\n";
            cout << "total cost = R" << total_cost << endl; 
        }
        else if (100 <= num_of_units)
        {
             double total_cost, discount;
            total_cost = num_of_units * retail_price;
            discount = total_cost * (50.0 / 100.0);
            total_cost = total_cost - discount;
            cout << "\t\t50%" <<  " discount\n\n";
            cout << "total cost = R" << total_cost << endl; 
        }
    }
    else
    {
        cout << "Invalid number of units sold!\n"
             << "Close then run the program again.\n";
    }
    return 0;
}