#include <iostream>
using namespace std;
#include <stack>

int main()
{
    string input;
    string output = "";
    cin >> input;
    stack<char> s;
    for (int i = 0; i < input.size(); i++)
    {
        if (s.empty() || s.top() != input[i])
            s.push(input[i]);
        else if (s.top() == input[i])
            s.pop();
    }
    while (!s.empty())
    {
        output += s.top();
        s.pop();
    }
    for (int j = output.size() - 1; j >= 0; j--)
        cout << output[j];
    cout << endl;
}
