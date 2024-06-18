#include <iostream>
using namespace std;
#include "lib/sort.h"

int main()
{
    Sort sort;
    int n;
    int k;
    cin >> n >> k;
    int arrA[n];
    int arrB[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }
    sort.insertion_sort(arrA, n);
    sort.insertion_sort(arrB, n);

    int count = 0;
    for (int j = 0; j < k; j++)
    {
        if (arrA[j] < arrB[n - 1 - j])
        {
            int temp = arrA[j];
            arrA[j] = arrB[n - 1 - j];
            arrB[n - 1 - j] = temp;
            count++;
        }
    }
    int sum = 0;
    // for (int a = 0; a < n; a++)
    // {
    //     cout << arrA[a] << " ";
    // }
    // cout << endl;
    for (int a = 0; a < n; a++)
    {
        sum += arrA[a];
    }
    cout << count << " " << sum << endl;
    return 0;
}