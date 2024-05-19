#include "MyCircularQueue.h"

MyCircularQueue::MyCircularQueue(int s)
{
    maxsize = s + 1;
    list = new elem[maxsize];
    initialize();
}
void MyCircularQueue::initialize()
{
    front = 0;
    rear = 0;
}
void MyCircularQueue::enqueue(const elem &e)
{
    if (!isFull())
    {
        list[rear] = e;
        rear = (rear + 1) % maxsize;
    }
    else
        cout << "Queue is Full!" << endl;
}
void MyCircularQueue::printDetail() const
{
    cout << "Queue: ";
    if (!isEmpty())
    {
        int i = front;
        while (i != rear)
        {
            cout << "[" << list[i] << "]";
            i = (i + 1) % maxsize;
        }
    }
};
int MyCircularQueue::size() const
{
    int size = 0;
    if (!isEmpty())
    {
        int i = front;
        while (i != rear)
        {
            size++;
            i = (i + 1) % maxsize;
        }
    }
    return size;
}
void MyCircularQueue::dequeue()
{

    if (!isEmpty())
    {
        front = (front + 1) % maxsize;
    }
    else
        cout << "Queue is Empty!" << endl;
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

void MyCircularQueue::print()
{
    /*cout << "Queue: ";
    if (!isEmpty())
    {
        int i = front;
        while (i != rear)
        {
            cout << "[" << list[i] << "]";
            i = (i + 1) % maxsize;
        }
    }*/
    cout << "Size: " << size() << endl;
    printDetail();
    cout << "\nindex: ";
    if (!isEmpty())
    {
        int i = front;
        while (i != rear)
        {
            cout << i + 1 << " ";
            i = (i + 1) % maxsize;
        }
    }
    cout << "\nfront: " << front << ", rear: " << rear << endl;
}