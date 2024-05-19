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
    void printDetail() const;
    int size() const;
    void dequeue();
    bool isEmpty() const;
    bool isFull() const;
    void print();
    elem Front();
    elem Rear();
};

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

int main()
{
    MyCircularQueue queue(9);
    cout << "===== Dequeue x 1 =====" << endl;
    queue.dequeue();
    queue.print();
    cout << "===== Enqueue x 7 (10~70) =====" << endl;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60);
    queue.enqueue(70);
    queue.print();
    cout << "===== Dequeue x 3 =====" << endl;
    for (int i = 0; i < 3; i++)
        queue.dequeue();
    queue.print();
    cout << "===== Enqueue x 6 (10~60) =====" << endl;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60);
    queue.print();

    return 0;
}