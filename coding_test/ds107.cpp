#include <iostream>
using namespace std;
#include "lib/sort.h"

int main()
{
    Sort sort;
    int first, second;
    cin >> first >> second;
    int arr1[first];
    int arr2[second];

    for (int i = 0; i < first; i++)
    {
        cin >> arr1[i];
    }

    for (int j = 0; j < second; j++)
    {
        cin >> arr2[j];
    }

    int merge = first + second;
    int arr3[merge];

    for (int i = 0; i < first; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < second; j++)
    {
        arr3[first + j] = arr2[j];
    }
    sort.bubble_sort_des(arr3, merge);

    for (int i = 0; i < merge; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}