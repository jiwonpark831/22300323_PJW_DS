#include <iostream>
using namespace std;
#include <fstream>

struct Elem
{
    double gpa;
    string name;
};

class MyCircularQueue
{
private:
    int maxsize;
    int front;
    int rear;
    Elem *list;

public:
    MyCircularQueue(int = 10);
    ~MyCircularQueue()
    {
        delete[] list;
    };
    void initialize();
    void enqueue(const Elem &e);
    bool isFull() const;
    void print();
};

MyCircularQueue::MyCircularQueue(int s)
{
    maxsize = s + 1;
    list = new Elem[maxsize];
    initialize();
}
void MyCircularQueue::initialize()
{
    front = 0;
    rear = 0;
}
void MyCircularQueue::enqueue(const Elem &e)
{
    if (!isFull())
    {
        list[rear] = e;
        rear = (rear + 1) % maxsize;
    }
    else
        cout << "Queue is Full!" << endl;
}

bool MyCircularQueue::isFull() const
{
    if ((rear + 1) % maxsize == front)
        return true;
    return false;
}

void MyCircularQueue::print()
{
    int i = front;
    cout << "Highest GPA: " << list[i].gpa << endl;
    while (i != rear)
    {
        cout << list[i].name << " " << list[i].gpa << endl;
        i = (i + 1) % maxsize;
    }
}

int main()
{
    MyCircularQueue myqueue;

    ifstream fin;
    double max = 0;

    fin.open("data.txt");
    while (!fin.eof())
    {
        Elem one;
        fin >> one.gpa >> one.name;
        if (one.gpa > max)
        {
            max = one.gpa;
            myqueue.initialize();
            myqueue.enqueue(one);
        }
        else if (one.gpa == max)
        {
            myqueue.enqueue(one);
        }
    }
    myqueue.print();
    fin.close();
    return 0;
}