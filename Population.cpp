// PROGRAM: POPULATION.CPP
// This program will predict the size of a population of organisms.
// Written by Ndumiso Mahlangu
// Last modification: 06/12/2022
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;


void ClearDataFromFile()
{
    ofstream outputFile;
    outputFile.open("Population.txt");

    cout << "Formatting the textfile.\n";
    outputFile << " ";
    outputFile.close();
    cout << "Done.\n";
}

int main()
{
    int choice;     // To hold a menu choice
    // Constants for menu choices
    const int NEW_CHOICE = 1,
              OLD_CHOICE = 2,
              QUIT_CHOICE = 3;

    // Display the menu and get a choice.
    cout << "\t\tPopulation Simulator\n\n"
         << "1. Start a new simulation\n"
         << "2. View result of previous simulation\n"
         << "3. Quit the Program\n\n"
         << "Enter your choice: ";
    cin >> choice;

    // Set the numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    // Respond to the user's menu selection.
    switch (choice)
    {
    case NEW_CHOICE:
        {
            ClearDataFromFile();
            float number;

            // Input Validation for starting number.
            while (number < 2)
            {
                cout << "\nEnter the starting number of organisms? ";
                cin >> number;
                if (number < 2)
                {
                    cout << "Invalid number, do not accept a number\n"
                         << "less than 2 for the starting size of the population.\n";
                }                
            }

            float average;
            // Input Validation for average population increase.
            do
            {
                cout << "\nEnter average daily population increase(%)? ";
                cin >> average;
                if (average < 0)
                {
                    cout << "Invalid number, do not accept a negative number\n"
                         << "for average daily population increase.\n";
                }
            } while (average < 0);

            // Convert percentage to fraction.
            average = (average / 100.0);
            
            int days;
            // Input Validation for days they will multiply.
            do
            {
                cout << "\nEnter the number of days they will multiply? ";
                cin >> days;
                if (days < 1)
                {
                    cout << "Invalid number, do not accept a number less than\n"
                         << "1 for the number of days they will multiply.\n";
                }        
            } while (days < 1);

            ofstream outputFile;
            outputFile.open("Population.txt");

            cout << "Now writing data to the file.\n";
            
            for (int i = 1; i <= days; i++)
            {
                // Calculate the increase of population from start.
                float increase;

                increase = number * average;
                number = number + increase;
                cout << "\nDay " << i << " " << number << endl;
                outputFile << "Day " << i << " " << number << endl;
            }
            // Close the file
            outputFile.close();
            cout <<"Done.\n";
            cout << "Program ending.\n";
        }
        break;
    
    case OLD_CHOICE:
        {
            ifstream   inputFile; 
            string data;

            inputFile.open("Population.txt");

            // Read the size numbers from the file and
            // display them.
            cout << "Reading data from the file.\n";
            while (inputFile >> data)
            {
                cout << data << endl;
            }

            // Close the file.
            inputFile.close();
            cout << "\nProgram ending.\n";               
        }        
        break;

    case QUIT_CHOICE:
        {
            cout << "\nProgram ending.\n";
        }        
        break;

    default:
        {
            cout << "The valid choice are 1 through 3. Run the\n"
                 << "program again and select one of those.\n";
        }
        break;
    }        
    return 0;
}