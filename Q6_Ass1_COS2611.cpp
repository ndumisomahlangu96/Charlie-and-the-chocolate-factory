/*
PROGRAM: Q6_Ass1.cpp
Written by Kutlwano Ndumiso Mahlangu
Last modification: 2024/04/24

Consider the following code and indicate which of the following is a correct
explanation what is happening in the code:

*/
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // 1 Initialisatio stackClass is initially an empty stack.
    std::stack<std::string> stackClass;

    // 2 "John" stackClass.push("John") "John" is pushed onto the stack.
    stackClass.push("John");

    // 3 "John", "Peter" stackClass.push("Peter") "Peter" is pushed onto the stack.
    stackClass.push("Peter");

    // 4 "John" stackClass.pop() The top element ("Peter") is popped from the stack.
    stackClass.pop();

    // 5 "John" std::string num = "5" A new string "5" is created.
    std::string num = "5";

    // 6 "John","5" stackClass.push(num) "5" is pushed onto the stack.
    stackClass.push(num);

    // 7 "John", "5", "Mary" stackClass.push("Mary") "Mary" is pushed onto the stack.
    stackClass.push("Mary");

    // 8 "John","5", "Mary", "Fred" stackClass.push("Fred") "Fred" is pushed onto the stack.
    stackClass.push("Fred");

    // 9 "John", "5", "Mary" stackClasss.pop() The top element ("Fred") is popped from the stack.
    stackClass.pop();

    // 10 "John", "5", "Mary", "Ben" stackClass.push("Ben") "Ben" is pushed onto the stack.
    stackClass.push("Ben");

    int size = stackClass.size();
    std::cout << "The size of the class: " << size << "\n";

    while (!stackClass.empty())
    {
        std::cout << stackClass.top() << endl;
        stackClass.pop();
    }
    return 0;
}