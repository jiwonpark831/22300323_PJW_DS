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
    void print052();
};