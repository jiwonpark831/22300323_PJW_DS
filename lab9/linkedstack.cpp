#include <iostream>
using namespace std;
// #include "stacklib.h"

class Node
{
public:
    int data;
    Node *next;
    Node(int data);
};

class MyLinkedStack
{
    Node *stacktop;

public:
    void initialized();
    bool isEmpty() const;
    void push(const int &);
    void pop();
    int peek() const;
    int getNodeCnt();
    linkedStack();
    ~linkedStack();
    void printAll();
};

void MyLinkedStack::initialized()
{
}

bool MyLinkedStack::isEmpty() const
{
    if (stacktop == NULL)
        return true;
    return false;
}

