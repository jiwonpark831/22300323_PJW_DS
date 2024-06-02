#include <iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}

void bubble_sort(int *arr, int n)
{
    int temp;
    for (int j = n - 1; j >= 1; j--)
    {
        for (int k = 0; k < j; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
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
    bubble_sort(arr, n);
    cout << "====" << endl;
    print(arr, n);
    return 0;
}