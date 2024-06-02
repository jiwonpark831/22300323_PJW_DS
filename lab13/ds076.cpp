#include <iostream>
using namespace std;
#include "lib/sort.h"

void printMenu()
{
    cout << "1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > ";
}

int main()
{
    Sort sort;
    int menu = 0;
    while (menu != 6)
    {
        printMenu();
        cin >> menu;
        if (menu == 1)
        {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            sort.print(arr, n);
            sort.selectionSort(arr, n);
            cout << "====" << endl;
            sort.print(arr, n);
        }
        else if (menu == 2)
        {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            sort.print(arr, n);
            sort.insertion_sort(arr, n);
            cout << "====" << endl;
            sort.print(arr, n);
        }
        else if (menu == 3)
        {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            sort.print(arr, n);
            sort.bubble_sort(arr, n);
            cout << "==== ascending order ====" << endl;
            sort.print(arr, n);
            cout << endl;
            sort.bubble_sort_des(arr, n);
            cout << "==== descending order ====" << endl;
            sort.print(arr, n);
        }
        else if (menu == 4)
        {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            sort.print(arr, n);
            sort.quick_sort(arr, 0, n - 1, n);
            cout << "====" << endl;
            sort.print(arr, n);
        }
        else if (menu == 5)
        {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            sort.print(arr, n);
            sort.merge_sort(arr, n);
            cout << "====" << endl;
            sort.print(arr, n);
        }
        else if (menu == 6)
        {
            cout << "bye!" << endl;
        }
    }

    return 0;
}
