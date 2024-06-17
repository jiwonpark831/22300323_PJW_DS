#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *start = NULL;
node *last = NULL;

void swapNode(node *x, node *y)
{
    int temp = x->data;
    x->data = y->data;
    y->data = temp;
}

node *createNode(int x)
{
    node *newNode = new node;
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void addLast(int y)
{
    node *newNode = createNode(y);
    if (start == NULL)
    {
        start = newNode;
        last = newNode;
    }
    else
    {
        last->next = newNode;
        last = newNode;
    }
}

void printLinked()
{
    node *temp = start;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
}

void clearLinked()
{
    node *temp;
    while (start != NULL)
    {
        temp = start;
        start = start->next;
        free(temp);
    }
    start = NULL;
    last = NULL;
}

void init(int size)
{
    int number;
    clearLinked();
    cout << "Enter numbers > ";

    for (int i = 0; i < size; i++)
    {
        cin >> number;
        addLast(number);
    }
}

void selectionLinked()
{
    node *key;
    node *temp;

    key = start;
    while (key != NULL)
    {
        temp = key->next;
        while (temp != NULL)
        {
            if (key->data > temp->data)
                swapNode(key, temp);
            temp = temp->next;
        }
        key = key->next;
    }
}

int main()
{
    int choice;
    while (1)
    {
        cout << "\nHow many numbers do you want to create (0:exit) > ";
        cin >> choice;
        if (choice == 0)
            break;
        init(choice);
        selectionLinked();
        printLinked();
    }
}