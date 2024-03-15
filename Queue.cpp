/*
PROGRAM: Queue.cpp
Written by Kutlwano Ndumiso Mahlangu
Last modification: 2024/03/15

Program demonstrates the Queue template. It creates a queue that can hold strings,
then prompts the user to enter a series of names that are enqueued. The program then
dequeues all of the names and display them.
*/
#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

const int QUEUE_SIZE = 5;

int main()
{
    string name;

    // Create a Queue.
    Queue<string> queue(QUEUE_SIZE);

    // Enqueue some names.
    for (int count = 0; count < QUEUE_SIZE; count++)
    {
        cout << "Enter a name: ";
        getline(cin,name);
        queue.enqueue(name);
    }
    
    // Dequeue the names and display them.
    cout << "\nHere are the names you entered:\n";
    for (int count = 0; count < QUEUE_SIZE; count++)
    {
        queue.dequeue(name);
        cout << name << endl;
    }
    return 0;    
}