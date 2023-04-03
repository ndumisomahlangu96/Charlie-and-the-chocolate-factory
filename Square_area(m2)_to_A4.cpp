#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double m2_to_A4(double , double);
int main()
{
    // Input varaibles
    double height,
           length,
           num_pages;
    cout << "\t\tWelcome to Square area(m2) to A4!\n\n";

    cout << "This program converts an area measured in m2 to an equivalent\n"
         << "measured in number of A4 pages to cover the area.\n";

    cout << "\nEnter the heigth(m)? ";
    cin >> height;

    cout << "Enter the length(m)? ";
    cin >> length;

    // Output
    num_pages = m2_to_A4(length, height);
    cout << setprecision(2) << fixed << showpoint;
    cout << "\nNumber of A4 pages = " << num_pages << endl;
    cout << "\nGoodbye!\n";
    return 0;
}

//*************************************************************
// Function to convert square area into number of A4 pages.   *
//*************************************************************

double m2_to_A4(double x, double y)
{
    double area;
    const double conversion_factor = 0.06237;

    area = x * y;

    return (area / conversion_factor);
}