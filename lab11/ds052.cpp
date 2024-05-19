#include <iostream>
using namespace std;
#include "MyCircularQueue.h"

int main()
{
    MyCircularQueue myqueue;
    string menu;
    int size;
    int num;
    cin >> size;
    while (menu != "q")
    {
        cin >> menu;
        if (menu == "en")
        {
            cin >> num;
            myqueue.enqueue(num);
        }
        else if (menu == "de")
        {
            myqueue.dequeue();
        }
        else if (menu == "front")
        {
            if (myqueue.isEmpty())
                cout << "-1" << endl;
            else
                cout << "=> " << myqueue.Front() << endl;
        }
        else if (menu == "rear")
        {
            if (myqueue.isEmpty())
                cout << "-1" << endl;
            else
                cout << "=> " << myqueue.Rear() << endl;
        }
        else if (menu == "size")
        {
            cout << "=> " << myqueue.size() << endl;
        }
        else if (menu == "empty")
        {
            if (myqueue.isEmpty())
                cout << "=> 1" << endl;
            else
                cout << "=> 0" << endl;
        }
        else if (menu == "print")
        {
            myqueue.print052();
        }
    }
    cout << "bye!" << endl;
    return 0;
}