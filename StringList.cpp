#include <iostream>
#include "StringList.h"
using namespace std;

int main()
{
    // Define a StringList object.
    cout << "Welcome to my family, the Clan.\n" << endl;
    StringList family;

    // Append some values to the family.
    family.appendNode("Erick");
    family.appendNode("Gladys");
    family.appendNode("Simphiwe");
    family.appendNode("Kutlwano");
    family.appendNode("Siphesihle");

    // Display the values to the family.
    cout << "Here are the initial members:\n";
    family.displayList();
    cout << endl;

    // Insert some values to the family.
    cout << "Insert new members:\n";
    family.insertNode("Amo");
    family.insertNode("Vee");
    family.insertNode("Biscuit");

    // Display the values in the family.
    family.displayList();
    cout << endl;

    // Delete some values from the family.
    cout << "Delete old members:\n";
    family.deleteNode("Erick");
    family.deleteNode("Kutlwano");


    // Display the values in the family.
    family.displayList();
    cout << endl;

    // Destory the family.
    cout << "Delete all family:\n";
    family.~StringList();
    cout << endl;
    return 0;  
}