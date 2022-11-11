// PROGRAM: SPECTRAL ANALYSIS.CPP
// This program asks for the wavelength of an electromagnetic
// wave in meters and then displays what that wave.
// Written by Ricky
// Last modification: 2022/11/11
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double wavelength;   // To hold wavelength in metres
    char again;         // To hold Y or N input
    do
    {
        cout << "\t\tSpectral analysis of electromagnetic(EM) waves\n\n";

        cout << "Enter wavelength in metres(m)? ";
        // validate user input and error check for double
        while (!(cin >> wavelength))
        {
            // Explain error
            cout << "ERROR: a number must be entered: ";

            // Clear input stream
            cin.clear();

            // Discard previous input
            cin.ignore(123,'\n');
        }
        // Gamma Rays
        if ( wavelength <= 1E-11)
        {
            cout << "EM wave is classified as gamma rays.\n";
            // Does the user want to compute another wavelength?
            cout << "\nDo you want to calculate another wavelength"
                 << " of EM wave in metres? (Y/N)";
            cin >> again;    
        }
        // X-Rays
        else if (1E-11 < wavelength && wavelength <= 1E-8)
        {
            cout << "EM wave is classified as x-rays.\n";
            // Does the user want to compute another wavelength?
            cout << "\nDo you want to calculate another wavelength"
                 << " of EM wave in metres? (Y/N)";
            cin >> again;
        }
        // Ultraviolet
        else if (1E-8 < wavelength && wavelength <= 4E-7)
        {
            cout << "EM wave is classified as ultraviolet.\n";
            // Does the user want to compute another wavelength?
            cout << "\nDo you want to calculate another wavelength"
                 << " of EM wave in metres? (Y/N)";
            cin >> again;
        }
        // Visible Light
        else if (4E-7 < wavelength && wavelength <= 7E-7)
        {
            cout << "EM wave is classified as visible light.\n";
            // Does the user want to compute another wavelength?
            cout << "\nDo you want to calculate another wavelength"
                 << " of EM wave in metres? (Y/N)";
            cin >> again;
        }
        // Infrared
        else if (7E-7 < wavelength && wavelength <= 1E-3)
        {
            cout << "EM wave is classified as infrared.\n";
            // Does the user want to compute another wavelength?
            cout << "\nDo you want to calculate another wavelength"
                 << " of EM wave in metres? (Y/N)";
            cin >> again;
        }
        // Microwaves
        else if (1E-3 < wavelength && wavelength <= 1E-2)
        {
            cout << "EM wave is classified as microwave.\n";
            // Does the user want to compute another wavelength?
            cout << "\nDo you want to calculate another wavelength"
                 << " of EM wave in metres? (Y/N)";
            cin >> again;
        }    
        // Radio Waves
        else
        {
            cout << "EM wave is classified as radio waves.\n";
            // Does the user want to compute another wavelength?
            cout << "\nDo you want to calculate another wavelength"
                 << " of EM wave in metres? (Y/N)";
            cin >> again;
        }     
    } while (again == 'Y' || again == 'y');
    return 0;
}