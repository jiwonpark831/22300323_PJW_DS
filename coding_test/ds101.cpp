#include <iostream>
using namespace std;
#include "lib/sort.h"

int main()
{
    Sort sort;
    int n;
    cin >> n;
    int arr[n];
    if (n >= 1 && 500 >= n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    else
    {
        cout << "You must enter number between 1 to 500" << endl;

        return 0;
    }
    sort.insertion_sort(arr, n);
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}