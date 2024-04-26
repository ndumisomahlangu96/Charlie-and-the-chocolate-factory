// Specification file for the DynIntStack class
#ifndef DYNINSTACK_H
#define DYNINSTACK_H

class DynIntStack
{
private:
    // Structure for stack nodes
    struct StackNode
    {
        int value;          // Value in the node
        StackNode *next;    // Pointer to the next node
    };

    StackNode *top;         // Pointer to the stack top
    
public:
    // Constructor
    DynIntStack();

    // Destructor
    ~DynIntStack();

    // Stack operations
    void push(int);
    void pop(int &);
    bool isEmpty();


};

DynIntStack::DynIntStack()
{
    top = nullptr;

}

//*******************************************************
// Destructor                                           *
// This function deletes every node in the list.        *
//*******************************************************

DynIntStack::~DynIntStack()
{
    StackNode *nodePtr = nullptr, *nextNode = nullptr;

    // Position nodePtr at the top of the stack.
    nodePtr = top;

    // Traverse the list deleting each node.
    while (nodePtr != nullptr)
    {
        nextNode = nodePtr->next;
        delete nodePtr;
        nodePtr = nextNode;
    }
    
}

#endif
