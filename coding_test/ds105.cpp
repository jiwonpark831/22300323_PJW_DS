#include <iostream>
using namespace std;

struct node
{
    int score;
    string name;
    node *next;
};

node *start = NULL;
node *last = NULL;

void swapNode(node *x, node *y)
{
    int temps = x->score;
    string tempn = x->name;
    x->score = y->score;
    x->name = y->name;
    y->score = temps;
    y->name = tempn;
}

node *createNode(int score, string name)
{
    node *newNode = new node;
    newNode->score = score;
    newNode->name = name;
    newNode->next = NULL;
    return newNode;
}

void addLast(int score, string name)
{
    node *newNode = createNode(score, name);
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
    int i = 1;
    while (temp->next != NULL)
    {
        cout << i << "> " << temp->score << " " << temp->name << endl;
        temp = temp->next;
        i++;
    }
    cout << i << "> " << temp->score << " " << temp->name << endl;
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
    string name;
    int score;
    clearLinked();

    for (int i = 0; i < size; i++)
    {
        cin >> score >> name;
        addLast(score, name);
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
            if (key->score < temp->score)
                swapNode(key, temp);
            temp = temp->next;
        }
        key = key->next;
    }
}

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        init(n);
        selectionLinked();
        printLinked();
        break;
    }
    return 0;
}