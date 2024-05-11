#include <iostream>
using namespace std;
#include "stacklib.h"

int main()
{

    MyLinkedStack myStack;
    string menu = "";
    while (menu != "q")
    {
        cin >> menu;
        if (menu == "push")
        {
            int x;
            cin >> x;
            myStack.push(x);
        }
        else if (menu == "pop")
        {
            myStack.pop();
        }
        else if (menu == "clear")
        {
            myStack.initialized();
        }
        else if (menu == "print")
        {
            myStack.printAll();
        }
        else if (menu == "peek")
        {
            // myStack.peek();
            cout << myStack.peek() << endl;
        }
    }
    cout << "bye!" << endl;
    return 0;
}