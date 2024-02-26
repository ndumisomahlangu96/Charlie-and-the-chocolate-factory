// Specification file for the IntegerList class
#ifndef STRINGLIST_H
#define STRINGLIST_H
#include <string>
#include <iostream>
using namespace std;

class StringList
{
private:
    // Declare structure for the list
    struct ListNode
    {
        string value;              // The value in this node
        struct ListNode *next;  // To point to the next node
    };

    ListNode *head;             // List head pointer
public:
    // Constructor
    StringList();

    // Destructor
    ~StringList();

    // Linked list operations
    void appendNode(string);
    void insertNode(string);
    void deleteNode(string);
    void displayList() const;

};

// Constructor
StringList::StringList()
{
    head = nullptr;
}

StringList::~StringList()
{
    ListNode *nodePtr;      // To traverse the list
    ListNode *nextNode;     // To point to the next node

    // Position nodePtr at the head of the list.
    nodePtr = head;

    // While nodePtr is not at the end of the list...
    while (nodePtr != nullptr)
    {
        // Save a pointer to the next node.
        nextNode = nodePtr->next;

        // Delete the current node.
        delete nodePtr;

        // Position nodePtr at the next node
        nodePtr = nextNode;
    }
}

void StringList::appendNode(string str)
{
    ListNode *newNode;  // To point to a new node
    ListNode *nodePtr;  // To move through the list

    // Allocate a new node and store num there.
    newNode = new ListNode;
    newNode->value = str;
    newNode->next = nullptr;

    // If there are no nodes in the list
    // make newNode the first node.
    if (!head)
    {
        head = newNode;
    }
    else // Otherwise, insert newNode at end.
    {
        // Initialise nodePtr to head of list.
        nodePtr = head;

        // Find the last node in the list.
        while (nodePtr->next)
        {
            nodePtr = nodePtr->next;
        }

        // Insert newNode as the last node.
        nodePtr->next = newNode;
    }
}

void StringList::displayList() const
{
    ListNode *nodePtr;  // To move through the list

    // Position nodePtr at the head of the list.
    nodePtr = head;

    // While nodePtr points to a node, traverse
    // the list.
    while (nodePtr)
    {
        // Display the value in this node.
        cout << nodePtr->value << endl;

        // Move to the next node.
        nodePtr = nodePtr->next;
    }

    if (nodePtr == nullptr)
    {
        cout << "List is empty!\n";
    }
    
}

void StringList::insertNode(string str)
{
    ListNode *newNode;                      // A new node
    ListNode *nodePtr;                      // To traverse the list
    ListNode *previousNode = nullptr;       // The previous node

    // Allocate a new node and store str there.
    newNode = new ListNode;
    newNode->value = str;

    // If there are not nodes in the list
    // make newNode the first node
    if (!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else // Otherwise, insert newNode
    {
        // Position nodePtr at the head of list.
        nodePtr = head;

        // Initialise previousNode to nullptr.
        previousNode = nullptr;

        // Skip all nodes whose value is less than num.
        while (nodePtr != nullptr && nodePtr->value < str)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If the new node is to be the 1st in the list,
        // insert it before all other nodes.
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else // Otherwise insert after the previous node.
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

void StringList::deleteNode(string str)
{
    ListNode *nodePtr;              // To traverse the list
    ListNode *previousNode;         // To point to the previous node

    // If the list is empty, do nothing.
    if (!head)
    {
        return;
    }

    // Determine if the first node is the one.
    if (head->value == str)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        // Initialise nodePtr to head of list
        nodePtr = head;

        // Skip all nodes whos value member is 
        // not equal to num.
        while (nodePtr != nullptr && nodePtr->value != str)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        // If nodePtr is not at the end of the list,
        // link the previous node to the node after
        // nodePtr, then delete nodePtr.
        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}
#endif