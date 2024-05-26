#include <iostream>
#include "lib/linkedQueue.h"
using namespace std;

int main()
{
    LLQueue linkedQueue;
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1st : 1" << endl;
        cout << "=> fibonacci(1) : 1" << endl;
    }
    else if (n == 2)
    {
        cout << "1st : 1" << endl;
        cout << "2nd : 1" << endl;
        cout << "=> fibonacci(2) : 1" << endl;
    }
    else if (n > 2)
    {
        cout << "1st : 1" << endl;
        linkedQueue.enqueue(1);
        cout << "2nd : 1" << endl;
        linkedQueue.enqueue(1);
        for (int i = 3; i <= n; i++)
        {
            int one = linkedQueue.one();
            int two = linkedQueue.two();
            int result = one + two;
            if (i == 3)
                cout << "3rd : " << result << endl;
            else
                cout << i << "th : " << result << endl;
            linkedQueue.enqueue(result);
            linkedQueue.dequeue();
        }
        cout << "=> fibonacci(" << n << ") : " << linkedQueue.Rear() << endl;
    }

    return 0;
}