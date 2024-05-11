#include <iostream>
using namespace std;
#include "stacklib.h"

int main()
{
    MyLinkedStack stack;
    string op;
    string exp = "";
    int result = 0;
    getline(cin, exp);
    for (int i = 0; i < exp.size(); i++)
    {
        op = exp.substr(i, 1);
        if (op == "#")
        {
            stack.push(exp[i + 1]) ƒ;
            i++;
        }
        else if (op == "+")
        {
            result = stack.pop() + stack.pop();
            stack.push(result);
        }
        else if (op == "-")
        {
            result = stack.pop() - stack.pop();
            stack.push(result);
        }
        else if (op == "*")
        {
            result = stack.pop() * stack.pop();
            stack.push(result);
        }
        else if (op == "/")
        {
            result = stack.pop() / stack.pop();
            stack.push(result);
        }
    }
    cout << " = " << result << endl;

    return 0;
}