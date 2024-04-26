#include <iostream>
#include "DynIntStack.h"
using namespace std;

//*******************************************************
// Member function isEmpty returns true if the stack    *
// is empty, or false otherwise.                        *
//*******************************************************

bool DynIntStack::isEmpty()
{
    bool status;

    if (!top)
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}

//*******************************************************
// Member function push pushes the argument onto        *
// the stack                                            *
//*******************************************************

void DynIntStack::push(int num)
{
    StackNode *newNode = nullptr;   // Pointer to a new node

    // Allocate a new node and store num there.
    newNode = new StackNode;
    newNode->value = num;

    // If there are no nodes in the list
    // make newNode the first node.
    if(isEmpty())
    {
        top = newNode;
        newNode->next = nullptr;
    }
    else    // Otherwise, insert NewNode before top.
    {
        newNode->next = top;
        top = newNode;
    }
}

//*********************************************************
// Member function pop pops the value at the top          *
// of the stack off, and copies it into the variable      *
// passed as an argument.                                 *
//*********************************************************

void DynIntStack::pop(int &num)
{
    StackNode *temp = nullptr;  // Temporary pointer

    // First make sure the stack isn't empty.
    if (isEmpty())
    {
        cout << "The stack is empty.\n";
    }
    else    // pop value off top of stack
    {
        num = top->value;
        temp = top->next;
        delete top;
        top = temp;
    }
    
}

int main()
{
    int catchVar;   // To hold values popped off the stack

    // Create a DynIntStack object.
    DynIntStack stack;

    // Push 5, 10, and 15 onto the stack.
    cout << "Pushing 5\n";
    stack.push(5);
    cout << "Pushing 10\n";
    stack.push(10);
    cout << "Pushing 15\n";
    stack.push(15);

    // Pop the values off the stack and display them.
    cout << "Popping...\n";
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;
    stack.pop(catchVar);
    cout << catchVar << endl;

    // Try to pop another value off the stack.
    cout << "\nAttempting to pop again... ";
    stack.pop(catchVar);
    return 0;
}
