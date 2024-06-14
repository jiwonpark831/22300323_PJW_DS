#include <iostream>
using namespace std;
#include <queue>
#include <vector>

int main()
{
    int num;
    int k;
    cin >> num >> k;
    priority_queue<int> pq;
    for (int i = 0; i < num; i++)
    {
        int input;
        cin >> input;
        pq.push(input);
    }

    for (int j = 0; j < k - 1; j++)
    {
        pq.pop();
    }
    cout << pq.top() << endl;

    return 0;
}
