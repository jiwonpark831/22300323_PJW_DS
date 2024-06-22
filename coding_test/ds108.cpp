#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int most = A[0];
    int count = 1;
    for (int j = 0; j < n; j++)
    {
        if (count == 0)
        {
            most = A[j];
            count++;
        }
        else if (A[j] == most)
            count++;
        else
            count--;
    }
    cout << most << endl;

    return 0;
}