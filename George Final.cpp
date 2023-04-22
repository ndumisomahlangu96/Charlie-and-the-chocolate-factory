#include <iostream>
#include <vector>
using namespace std;

// Function prototype.
int user_validation();

int main()
{
    // Start of program.
    // INPUT
    // Declare the variables.
    int inValue,        // the value currently entered by user
        smallest,       // the smallest value entered
        largest,        // the largest value entered
        range,          // largest - smallest
        num_loop = 1;  // counter to keep track of number of loops
    
    vector<int> numbers;    // A vector to store the numbers entered by user
    int size;               // number to store the size of vector
    

    // PROCESS
    cout << "\t\tWelcome to George Final\n\n";
    cout << "Enter a series of numbers (0 to stop" << endl;
    // do-while loop processes all values until user enters 0.
    do
    {
        // Call function to validate user input.
        inValue = user_validation();

        // PROCESS
        if (num_loop == 1)
        {
            // The push_back member function accepts a value as an argument
            // and store that value after the last element in the vector.
            numbers.push_back(inValue);
            largest = inValue;
            smallest = inValue;
            range = largest - smallest;
        }
        else
        {
            numbers.push_back(inValue);
            if (inValue > largest)
            {
                largest = inValue;
            }
            if (inValue < smallest)
            {
                smallest = inValue;
            }
            range = largest - smallest;
        }
        
        
        // OUTPUT 
        cout << "\ninValue: " << inValue;
        cout << "\nlargest: " << largest;
        cout << "\nsmallest: " << smallest;
        cout << "\nrange: " << range;
        cout << "\nNumber of loops: " << num_loop << endl;

        // Increment num_loop
        num_loop += 1;
    
    } while (inValue != 0);

    // Display the vector elements.
    cout << "\nList of all the numbers entered by user:" << endl;
    for (int val : numbers)
    {
        cout << val << endl;    
    }
    
    // End of program.
    cout << "\nGoodbye!" << endl;
    return 0;
}

// Function
// make sure that the program rejects negative values and values above 1000.
int user_validation()
{
    int num;
    bool condition_1 = true,   // negative number entered
         condition_2 = true;   // number above 1000 entered
      while (condition_1 || condition_2)
        {   
            cout << "\nValid numbers must be positive and below 1000 " << endl;
            cout << "Enter value: ";
            cin >> num;
      
            // Change state of condition_1 if number entered is positive.
            if (0 <= num)
            {
                condition_1 = false;
            }

            // Change state of condition_2 if number entered is below 1000.
            if (num < 1000)
            {
                condition_2 = false;
            }
        };
    return num;
}