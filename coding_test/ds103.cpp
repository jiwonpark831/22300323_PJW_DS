#include <iostream>
using namespace std;
#include "lib/sort.h"

int main()
{
    Sort sort;
    int n;
    int k;
    int arr[n];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort.insertion_sort(arr, n);
    cout << arr[n - k] << endl;
    return 0;
}
