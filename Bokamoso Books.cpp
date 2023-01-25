
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

// Function for Menu
void Menu()
{
    cout << "\n\n\t\tBokamoso Books\n\n"
         << "========================\n"
         << "1. Books purchased\n"
         << "2. Textfile\n"
         << "3. Quit\n"
         << "=======================\n";
}

// Function for option in Textfile.
void Options()
{
    cout << "\n\n\t\tTextfile\n"
         << "======================\n"
         << "4. Erase\n"
         << "5. Read\n"
         << "======================\n";
}

int main()
{
    // constant for menu choices
    const int CHOICE_PURCHASE = 1,
              CHOICE_TEXTFILE = 2,
              CHOICE_QUIT = 3,
              OPTION_ERASE = 4,
              OPTION_READ = 5;
    int choice = 0;
    int option = 0;

    
    // Creation of ofstream class object
    ofstream fout;
    ifstream fin;

    // Declaring string variable for textfile
    string line;
    string date;

    // Declaring argument for time()
    time_t tt;

    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;

    do
    {
        Menu();

        cout << "Enter choice?";
        cin >> choice;

        switch (choice)
        {
        case CHOICE_PURCHASE:
            cout << "\n\n\t\tBook Purchased(Press -1 to exit)\n"
                 << "======================\n";

            // Applying time()
            time(&tt);

            // Using localtime()
            ti = localtime(&tt);
            cout << "Current Day, Date and Time is = "
                 << asctime(ti) << endl;

            date = asctime(ti);
  
            fout.open("Bokamoso Books.txt",ios::app);
            fout << date << endl;

            // Execute a loop If file successfully opened
            while (fout)
            {
                // Read a line from standard input
                cout << "\nEnter customer name,surname"
                     << " and number of books purchases\n(name,surname,numbers): ";
                getline(cin,line);

                // Press -1 to exit
                if (line == "-1")
                {
                    break;
                }               
                // Write line in file
                fout << line << endl;          
            }
            // Close the File
            fout.close();
            
            break;

        case CHOICE_TEXTFILE:

            Options();

            cout << "Enter option? ";
            cin >> option;

            switch (option)
            {
            case OPTION_ERASE:
                cout << "Erase textfile.\n";
                fout.open("Bokamoso Books.txt", ios::out);
                cout << "Closing textfile.\n";

                // Close the file
                fout.close();
                break;

            case OPTION_READ:
                cout << "Read textfile.\n";
                fin.open("Bokamoso Books.txt");
                while (getline(fin,line))
                {
                    // Print line (read from file) in Console
                    cout << line << endl;
                }

                // Close the file
                fin.close();
                break;
            
            default:
                cout << "Invalid option! Valid option 4 through 5.\n";
                break;
            }

            break;

        case CHOICE_QUIT:
            cout << "Close program ... \n";
            break;
        
        default:
            cout << "Invalid input! Only valid input is between 1 to 3.\n\n";
            break;
        }
        
    } while (choice != CHOICE_QUIT);
    
    return 0;
}