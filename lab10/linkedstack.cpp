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
    MyLinkedStack();
    ~MyLinkedStack();
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

void MyLinkedStack::pop()
{
    if (isEmpty())
        cout << "Stack is Empty" << endl;
}
int main(){
    
}