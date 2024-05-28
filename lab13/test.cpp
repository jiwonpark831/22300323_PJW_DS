#include <iostream>
using namespace std;
#define _DEBUGMODE_

int main()
{

#ifdef _DEBUGMODE_
    cout << "DEBUGMODE" << endl;
#endif
    cout << "hello world" << endl;
    return 0;
}