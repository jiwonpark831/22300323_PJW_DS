#include <iostream>
using namespace std;

typedef int elem;

class MyCircularQueue
{
private:
    int maxsize;
    int front;
    int rear;
    elem *list;

public:
    MyCircularQueue(int = 10);
    ~MyCircularQueue()
    {
        delete[] list;
    };
    void initialize();
    void enqueue(const elem &e);
    void dequeue();
    bool isEmpty() const;
    bool isFull() const;
    void print();
    elem Front();
    elem Rear();
};

MyCircularQueue::MyCircularQueue(int s)
{
    maxsize = s;
    list = new elem[s];
    initialize();
}
void MyCircularQueue::initialize()
{
    front = 0;
    rear = 0;
}
void MyCircularQueue::enqueue(const elem &e)
{
    int size() const;
}
bool MyCircularQueue::isEmpty() const
{
    if (front == rear)
        return true;
    return false;
}

bool MyCircularQueue::isFull() const
{
    if ((rear + 1) % maxsize == front)
        return true;
    return false;
}

int main()
{
    int s;
    cout << "Size: ";
    cin >> s;
    MyCircularQueue(s);
    cout << "Queue: [" << "]" << endl;
    cout << "index: " << endl;
    cout << "front: " << ", rear: " << endl;

    return 0;
}