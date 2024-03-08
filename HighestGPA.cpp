/*
PROGRAM: HIGHEST_GPA.cpp
Written by Kutlwano Ndumiso Mahlangu
Last modification: 2024/03/08

In this example, we write a C++ program that reads a data file consisting of each
studen't GPA followed by the student's name. The program then prints the highest 
GPA and the names of all of the students who received that GPA. The program
scans the input file only once. Moreover, we assume that there is a maximum of 
100 students in the class.

Algorithm:
1. Declare the variables and initialise stack.
2. Open the input file.
3. If the input file does not exist, exit the program.
4. Set the output of the floating-point numbers to a fixed decimal
   format with a decimal point and trailing zeros. Also, set the precision
   to two decimal places.
5. Read the GPA and the student name.
6. highestGPA = GPA;
7. while (not end of file)
   {
    7.1 if (GPA > highestGPA)
    {
        7.1.1   clearstack(stack);
        7.1.2   push(stack, student name);
        7.1.3   highestGPA = GPA;
    }
   }
   7.2  else
   {
        if  (GPA is equal to highestGPA)
        {
            push(stack, student name);
        }
   }
   7.3  Read GPA and student name;
   }
8. Output the highest GPA.
9. Output the names of the students having the highest GPA.
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

//********************************************************
// This program uses the class myStack to determine the  *
// highest GPA from a list of students with their GPA.   *
// The program also outputs the names of the students    *
// who received the highest GPA.                         *
//********************************************************
#include "myStack.h"

using namespace std;

int main()
{
    // 1. Declare the variables and initialise stack.
    double GPA;
    double highestGPA;
    string name;
    stackType<string> stack(100);
    ifstream infile;

    // 2. Open the input file.
    infile.open("HighestGPAData.txt");

    // 3. If the input file does not exist, exit the program.
    if (!infile)
    {
        cout << "The input file does not "
             << "exist. Program terminates!"
             << endl;
        return 1; // exit program
    }

    // 4. Set the output of the floating-point numbers to a fixed decimal
    cout << fixed << showpoint;
    cout << setprecision(2);

    // 5. Read the GPA and the student name.
    infile >> GPA >> name;

    // 6. highestGPA = GPA
    highestGPA = GPA;

    // 7. while (not end of file) 
    while (infile)
    {
        // 7.1 if (GPA > highestGPA)
        if (GPA > highestGPA)
        {
            // 7.1.1   clearstack(stack);
            stack.initialiseStack();

            // 7.1.2   push(stack, student name);
            if (!stack.isFullStack())
            {
                stack.push(name);
            }

            // 7.1.3   highestGPA = GPA;
            highestGPA = GPA;
        }
        // 7.2  else
        else if (GPA == highestGPA)
        {
            if (!stack.isFullStack())
            {
                stack.push(name);
            }
            else
            {
                cout << "Stack overflows. "
                     << "Program terminated!"
                     << endl;
                    return 1;   // exit program
            }  
        }
        

        // 7.3  Read GPA and student name;
        infile >> GPA >> name;
    }

    // 8. Output the highest GPA.
    cout << "Highest GPA= " << highestGPA
         << endl;
    cout << "The students holding the "
         << "highest GPA are:" << endl;

    // 9. Output the names of the students having the highest GPA.
    while (!stack.isEmptyStack())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
    cout << endl;

    return 0;    
}