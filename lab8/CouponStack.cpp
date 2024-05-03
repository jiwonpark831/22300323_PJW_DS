#include <iostream>
using namespace std;

struct Elem
{
    int num;
    string name;
};

class CouponStack
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
    CouponStack(int size = 10);
    ~CouponStack() { delete[] list; };
    void print();
    void rprint();
};

CouponStack::CouponStack(int size)
{
    maxsize = size;
    list = new Elem[size];
    initialize();
}

void CouponStack::initialize()
{
    top = 0;
}

bool CouponStack::isEmpty() const
{
    return (top == 0) ? true : false;
}

bool CouponStack::isFull() const
{
    return (top == maxsize) ? true : false;
}

void CouponStack::push(const Elem &e)
{
    if (isFull())
        return;
    list[top++] = e;
}

void CouponStack::print()
{
    for (int i = 0; i < top; i++)
    {
        cout << list[i].num << list[i].name << endl;
    }
}

void CouponStack::rprint()
{
    for (int i = top; i >= 0; i--)
    {
        cout << list[i].num << list[i].name << endl;
    }
}

Elem *CouponStack::pop()
{
    if (isEmpty())
        return nullptr;
    cout << list[top].num << list[top].name << endl;
    return &list[--top];
}

int main()
{
    int size;
    cin >> size;

    CouponStack mystack(size);
    char m;
    cin >> m;
    while (m != 'q')
    {
        Elem one;
        if (m == '+')
        {
            cin >> one.num >> one.name;
            mystack.push(one);
        }
        else if (m == '-')
        {
            mystack.pop();
        }
    }

    return 0;
}