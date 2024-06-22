#include <iostream>
using namespace std;
#include <queue>

int main()
{
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    for (int j = 0; j < n - 1; j++)
    {
        q.pop();
        int pushq = q.front();
        q.pop();
        q.push(pushq);
    }

    cout << q.front() << endl;
    return 0;
}