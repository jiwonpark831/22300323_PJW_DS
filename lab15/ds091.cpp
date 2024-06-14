#include <iostream>
using namespace std;
#include <stack>

int main()
{
    int menu = 1;
    while (menu != 0)
    {
        string str;
        cin >> str;
        if (str == "q")
            menu = 0;
        else
        {
            stack<char> left;
            stack<char> right;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == '<')
                {
                    if (!left.empty())

                    {
                        right.push(left.top());
                        left.pop();
                    }
                }
                else if (str[i] == '>')
                {
                    if (!right.empty())

                    {
                        left.push(right.top());
                        right.pop();
                    }
                }
                else
                    left.push(str[i]);
            }
            string result;
            while (!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
            while (!right.empty())
            {
                result += right.top();
                right.pop();
            }

            cout << "=> " << result << endl;
        }
    }
    return 0;
}
