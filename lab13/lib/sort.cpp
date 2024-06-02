#include "sort.h"

void Sort::selectionSort(int *arr, int n)
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

void Sort::insertion_sort(int *arr, int n)
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

void Sort::bubble_sort(int *arr, int n)
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
void Sort::bubble_sort_des(int *arr, int n)
{
    int temp;
    for (int j = n - 1; j >= 1; j--)
    {
        for (int k = 0; k < j; k++)
        {
            if (arr[k] < arr[k + 1])
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
void Sort::quick_sort(int *a, int left, int right, int n)
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

void Sort::merge(int a[], int b[], int n1, int n2, int n3, int n4)
{
    int i, j, k, t;
    i = n1;
    j = n3;
    k = n1;
    while (i <= n2 && j <= n4)
    {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    if (i > n2)
    {
        for (t = j; t <= n4; t++)
            b[k++] = a[t];
    }
    else
    {
        for (t = i; t <= n2; t++)
            b[k + t - i] = a[t];
    }
}

void Sort::merge_pass(int a[], int b[], int n, int s)
{
    int i, j;
    for (i = 0; i < (n - 2 * s + 1); i += 2 * s)
    {
        merge(a, b, i, i + s - 1, i + s, i + 2 * s - 1);
    }
    if (i + s <= n)
        merge(a, b, i, i + s - 1, i + s, n);
    else
    {
        for (j = i; j <= n; j++)
            b[j] = a[j];
    }
}

void Sort::merge_sort(int a[], int n)
{
    int s = 1;
    int b[n];
    while (s < n)
    {
        merge_pass(a, b, n - 1, s);

#ifdef DEBUGMODE
        print(b, n);
#endif
        s *= 2;
        merge_pass(b, a, n - 1, s);
#ifdef DEBUGMODE
        print(a, n);
#endif
        s *= 2;
    }
}

void Sort::print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << "[" << arr[i] << "] ";
    cout << endl;
}