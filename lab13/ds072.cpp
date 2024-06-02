#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void insertion_sort(int *arr, int n)
{
    for (int j = 1; j < n; j++)
    {
        int temp = arr[j];
        int k = j - 1;
        while ((k >= 0) && (arr[k] > temp))
        {
            arr[k + 1] = arr[k];
            k--;
        }
        arr[k + 1] = temp;
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
    insertion_sort(arr, n);
    cout << "====" << endl;
    print(arr, n);
    return 0;
}