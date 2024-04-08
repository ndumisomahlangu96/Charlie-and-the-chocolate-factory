/*
PROGRAM: Enum_in_C++.cpp
Written by Kutlwano Ndumiso Mahlangu
Last modification: 2024/04/08

Enum in C++
The enum keyword is used to declare enumerated types after that enumerated type name was written then under curly brackets possible values are defined. After defining Enumerated type variables are created. 
Enumerators can be created in two types:-

1.It can be declared during declaring enumerated types, just add the name of the variable before the semicolon. or,
2.Besides this, we can create enumerated type variables as the same as the normal variables.

enumerated-type-name variable-name = value;
*/
#include <iostream>
using namespace std;

// Defining enum Gender
enum Gender {Male, Female, Other};

void gender_output(Gender enum_gender) {
    switch (enum_gender)
    {
    case Male:
        cout << "Gender is Male";
        break;
    
    case Female:
        cout << "Gender is Female";
        break;
    case Other:
        cout << "Gender is Other";
        break;
        
    default:
        cout << "Value can be Male or Female";
        break;
    }
}

int main()
{
    // first_enum is the enumerated-type-name
    enum first_enum{value1 = 1, value2 = 10, value3};

    // In this case,
    first_enum e;
    e = value3;

    cout << "Welcome to Enum in C++!" << endl;

    cout << "\nfirst_enum is the enumerated-type-name" << endl;
    cout << "first_enum{value1 = 1, value2 = 10, value3};" << endl;
    cout << "first_enum e = value3;" << endl;
    cout << "e = " << e << endl;

    

    // Creating Gender type variable
    Gender gender = Male;

    cout << "\nDefining enum Gender" << endl;
    cout << "enum Gender {Male, Female, Other};" << endl;

    cout << "\nGender gender = Male;" << endl;
    gender_output(gender);

    gender = Other;
    cout << "\nGender gender = Other;" << endl;
    gender_output(gender);


    return 0;
}