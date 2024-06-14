#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *last = NULL;

void swapNode(struct node *x, struct node *y)
{
    int temp = x->data;
    x->data = y->data;
    y->data = temp;
}

struct node *createNode(int x)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void addLast(int y)
{
    struct node *newNode = createNode(y);
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
    struct node *temp = start;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
}

void clearLinked()
{
    struct node *temp;
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
    struct node *key;
    struct node *temp;

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