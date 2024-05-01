#include <iostream>
#include <fstream>
using namespace std;

struct Elem
{
    double gpa;
    string name;
};

class MyStack
{
private:
    int maxsize;
    int top;
    Elem *list;

public:
    void initialize();
    void push(const Elem &);
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

void MyStack::push(const Elem &e)
{
    list[top++] = e;
}

void MyStack::print()
{
    cout << "Top GPA: " << list[0].gpa << endl;
    for (int i = 0; i < top; i++)
        cout << list[i].name << endl;
}

int main()
{
    MyStack myStack;

    ifstream fin;
    string str;
    double max = 0;

    fin.open("gpa.txt");
    while (!fin.eof())
    {
        Elem one;
        fin >> one.gpa >> one.name;
        if (one.gpa > max)
        {
            max = one.gpa;
            myStack.initialize();
            myStack.push(one);
        }
        else if (one.gpa == max)
        {
            myStack.push(one);
        }
    }
    myStack.print();
    fin.close();

    return 0;
}