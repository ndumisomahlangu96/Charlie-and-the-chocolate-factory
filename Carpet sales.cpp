/*
A store sells carpets for R2.75 per meter. If a customer 
buys more than 10 m of carpet, they get a discount of 15% on 
every additional meter of carpet they purchase. Write a program
that inputs the carpet length that a user wishes to buy, store
the value in a double variable, and then calculates the outputs the 
total cost of the carpet.

PSEUDOCODE:
START
INPUT
User enters the carpet length that user wishes to buy.

PROCESS
Assign total cost to function calc_Cost.

OUTPUT
Display the total cost of the carpet.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype.
double calc_Cost(double metres_arg,double cost_per_metre_arg);

// Main program.
int main()
{
    // Input variable.
    double metres,cost_per_metre;
    // Output variable.
    double total_cost;

    cout << "\t\tWelcome to Carpet sales!\n\n";

    // validation of input(metres > 0).
    do
    {
        cout << "Please enter the amount of metres?\n";
        cin >> metres;
    } while (metres < 0.00);

    // validation of input(cost_per_metre >0).
    do
    {
        cout << "Please enter the cost per metre?\n";
        cin >> cost_per_metre;
    } while (metres < 0.00);
    
    // PROCESS
    total_cost = calc_Cost(metres, cost_per_metre);

    // Output
    cout << fixed << showpoint << setprecision(2);
    cout << "Total cost = R" << total_cost << endl;

    return 0;
}

// Function defined.
double calc_Cost(double metres_arg, double cost_per_metre_arg)
{
    // Intput variables.
    double const discount = 10.00;
    double reduced_metres, reduced_cost;

    // Output variable.
    double ans;
    
    if (metres_arg > discount)
    {
        reduced_metres = metres_arg - discount;
        reduced_cost = reduced_metres * (cost_per_metre_arg *  (15.0/100.00));
        ans = reduced_cost + (discount * cost_per_metre_arg);
    }
    else
    {
        ans = metres_arg * cost_per_metre_arg;
    }
    return ans;
    
}