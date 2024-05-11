#include "stacklib.h"
Node::Node(int data)
{
    this->data = data;
}
MyLinkedStack::MyLinkedStack()
{
    stacktop = NULL;
}
MyLinkedStack::~MyLinkedStack()
{
}

void MyLinkedStack::initialized()
{
    while (!isEmpty())
    {
        Node *temp = stacktop;
        stacktop = stacktop->next;
        delete temp;
    }
}

bool MyLinkedStack::isEmpty() const
{
    if (stacktop == NULL)
        return true;
    return false;
}

void MyLinkedStack::push(const int &data)
{
    Node *node = new Node(data);
    node->data = data;
    node->next = stacktop;
    stacktop = node;
}

void MyLinkedStack::pop()
{
    if (isEmpty())
        cout << "Stack is Empty" << endl;
    else
    {
        Node *temp = stacktop;
        stacktop = stacktop->next;
        cout << temp->data << endl;
        delete temp;
    }
}
int MyLinkedStack::peek() const
{
    return stacktop->data;
}
int MyLinkedStack::getNodeCnt()
{
    int count = 0;
    Node *p = stacktop;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}
void MyLinkedStack::printAll()
{
    Node *p = stacktop;
    if (isEmpty())
        cout << "Stack is Empty" << endl;
    else
    {
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << "(" << getNodeCnt() << " nodes)" << endl;
    }
}