// https://www.codewhoop.com/queue/queue-using-linked-list.html
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
        LLQueue(){
                front = NULL;
                rear = NULL;
        };
        ~LLQueue();
        void initialize();
        bool isEmpty() const;
        void enqueue(const int &value);
        void dequeue();
        void showFront();
        int Front();
        int Rear();
        void printAll();
};

void LLQueue::initialize()
{
        Node *ptr = new Node();
        for (ptr = front; ptr != NULL; ptr = ptr->link)
                dequeue();
        front = NULL;
        rear = NULL;
}
// Function to check if queue is empty or not
bool LLQueue::isEmpty() const
{
        if (front == NULL && rear == NULL)
                return true;
        else
                return false;
}

// function to enter elements in queue
void LLQueue::enqueue(const int &value)
{
        Node *ptr = new Node();
        ptr->data = value;
        ptr->link = NULL;

        // If inserting the first element/node
        if (front == NULL)
        {
                front = ptr;
                rear = ptr;
        }
        else
        {
                rear->link = ptr;
                rear = ptr;
        }
}

// function to delete/remove element from queue
void LLQueue::dequeue()
{
        if (isEmpty())
                cout << "Queue is empty\n";
        else
                // only one element/node in queue.
                if (front == rear)
                {
                        free(front);
                        front = rear = NULL;
                }
                else
                {
                        Node *ptr = front;
                        front = front->link;
                        free(ptr);
                }
}

// function to show the element at front
void LLQueue::showFront()
{
        if (isEmpty())
                cout << "Queue is empty\n";
        else
                cout << "element at front is:" << front->data;
}

// function to display queue
void LLQueue::printAll()
{
        if (isEmpty())
                cout << "Queue is empty\n";
        else
        {
                Node *ptr = front;
                while (ptr != NULL)
                {
                        cout << ptr->data << " ";
                        ptr = ptr->link;
                }
        }
}

// Main Function
int main()
{
        LLQueue linkedQueue;
        int choice, flag = 1, value;
        while (flag == 1)
        {
                cout << "\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
                cin >> choice;
                switch (choice)
                {
                case 1:
                        cout << "Enter Value:\n";
                        cin >> value;
                        linkedQueue.enqueue(value);
                        break;
                case 2:
                        linkedQueue.dequeue();
                        break;
                case 3:
                        linkedQueue.showFront();
                        break;
                case 4:
                        linkedQueue.printAll();
                        break;
                case 5:
                        flag = 0;
                        break;
                }
        }

        return 0;
}