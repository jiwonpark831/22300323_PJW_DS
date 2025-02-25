// compile for debugging
// g++ myselectionsort_debug.cpp -DDEBUGMODE

#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void selectionSort(int *arr, int n)
{
    int min_i = 0;

    for (int i = 0; i < n - 1; i++)
    {
        min_i = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min_i] > arr[j])
                min_i = j;
        }
        if (i != min_i)
            swap(arr[i], arr[min_i]);
#ifdef DEBUGMODE
        print(arr, n);
#endif
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    print(arr, n);
    selectionSort(arr, n);
    cout << "====" << endl;
    print(arr, n);
    return 0;
}