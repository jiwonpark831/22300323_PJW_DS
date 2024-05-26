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
    int dequeue();
};

void LLQueue::initialize()
{
    while (!isEmpty())
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
int LLQueue::dequeue()
{
    int value;
    if (isEmpty())
        return 0;
    else
        // only one element/node in queue.
        if (front == rear)
        {
            value = front->data;
            free(front);
            front = rear = NULL;
            return value;
        }
        else
        {
            Node *ptr = front;
            value = ptr->data;
            front = front->link;
            free(ptr);
            return value;
        }
}

int main()
{
    LLQueue queue1;
    LLQueue queue2;

    int n;

    string player1, player2;
    int win1 = 0;
    int win2 = 0;
    int deck1 = 0;
    int deck2 = 0;
    int prevWin = 0;
    int prevLose = 0;
    int win = 0;
    cin >> n;
    cin.ignore();
    getline(cin, player1);
    getline(cin, player2);

    for (int i = 0; i < n; i++)
    {
        queue1.enqueue(player1[i]);
        queue2.enqueue(player2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (win == 1)
        {
            deck1 = queue1.dequeue() + (prevWin - prevLose - 1);
            deck2 = queue2.dequeue();
        }
        else if (win == 2)
        {
            deck1 = queue1.dequeue();
            deck2 = queue2.dequeue() + (prevWin - prevLose - 1);
        }
        else if (win == 0)
        {

            deck1 = queue1.dequeue();
            deck2 = queue2.dequeue();
        }

        if (deck1 > deck2)
        {
            win1++;
            cout << "Round" << i + 1 << " - P1 win!" << endl;
            win = 1;
            prevWin = deck1;
            prevLose = deck2;
        }
        else if (deck1 < deck2)
        {
            win2++;
            cout << "Round" << i + 1 << " - P2 win!" << endl;
            win = 2;
            prevWin = deck2;
            prevLose = deck1;
        }
        else
        {
            cout << "Round" << i + 1 << " - Draw!" << endl;
            win = 0;
        }
    }

    if (win1 > win2)
        cout << "Final - P1 Win!" << endl;
    else if (win1 < win2)
        cout << "Final - P2 Win!" << endl;
    else
        cout << "Final - Draw!" << endl;

    return 0;
}