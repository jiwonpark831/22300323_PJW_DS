#include <iostream>
using namespace std;
void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}
void quick_sort(int *a, int left, int right, int n)
{
    int pivot, temp;
    int i, j;
    if (left >= right)
        return;
    i = left;
    j = right + 1;
    pivot = a[left];
    do
    {
        do
        {
            i++;
        } while (i <= right && a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
            swap(a[i], a[j]);
    } while (i < j);
    swap(a[left], a[j]);
#ifdef DEBUGMODE
    print(a, n);
#endif
    quick_sort(a, left, j - 1, n);
    quick_sort(a, j + 1, right, n);
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
    quick_sort(arr, 0, n - 1, n);
    cout << "====" << endl;
    print(arr, n);
    return 0;
}