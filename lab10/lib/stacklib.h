#include <iostream>
using namespace std;

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