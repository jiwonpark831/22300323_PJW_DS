#include <iostream>
using namespace std;

struct Node
{
        int data;
        Node *link;
};

class LLQueue
{
private:
        Node *front;
        Node *rear;

public:
        LLQueue()
        {
                front = NULL;
                rear = NULL;
        };
        ~LLQueue()
        {
                initialize();
        };
        void initialize();
        bool isEmpty() const;
        void enqueue(const int &value);
        void dequeue();
        void showFront();
        void showRear();
        void printAll();
        int one();
        int two();
        int Rear();
};