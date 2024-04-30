#include <iostream>
using namespace std;

struct Elem
{
    int value;
};

class MyStack
{
private:
    int maxsize;
    int top;
    Elem *list;

public:
    void initialize();
    bool isEmpty() const;
    bool isFull() const;
    void push(const Elem &);
    Elem *pop();
    MyStack(int size = 10);
    ~MyStack() { delete[] list; };
    void print();
};

MyStack::MyStack(int size)
{
    // cout << size << endl;
    maxsize = size;
    list = new Elem[size];
    initialize();
}

void MyStack::initialize()
{
    top = 0;
}

bool MyStack::isEmpty() const
{
    return (top == 0) ? true : false;
}

bool MyStack::isFull() const
{
    return (top == maxsize) ? true : false;
}

void MyStack::push(const Elem &e)
{
    if (isFull())
        return;
    list[top++] = e;
}

void MyStack::print()
{
    for (int i = 0; i < top; i++)
        cout << list[i].value << endl;
}

Elem *MyStack::pop()
{
    if (isEmpty())
        return nullptr;
    return &list[--top];
}

int main()
{
    int size;
    cin >> size;
    MyStack myStack(size);
    Elem one;

    string ppp;
    // for (int i = 0; i < size; i++)
    while (ppp != "print")
    {
        cin >> ppp;
        if (ppp == "push")
        {
            int x;
            cin >> x;
            one.value = x;
            myStack.push(one);
        }
        else if (ppp == "pop")
        {
            myStack.pop();
        }
        /* else if (ppp == "print")
           {
               myStack.print();
               return 0;
           }*/
    }
    myStack.print();
    // Elem *p;
    //  MyStack myStack(5);

    /* one.value = 10;
     myStack.push(one);
     one.value = 20;
     myStack.push(one);
     one.value = 30;
     myStack.push(one);
     p = myStack.pop();
     cout << "pop: " << p->value << endl;
     p = myStack.pop();
     cout << "pop: " << p->value << endl;
     myStack.print();*/

    // cout << "hello world" << endl;

    return 0;
}