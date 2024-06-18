#include <iostream>
using namespace std;

class MinHeap
{
    int arr[30];
    int length;

public:
    MinHeap()
    {
        length = 0;
    }
    ~MinHeap()
    {
    }
    void insertKey(int value)
    {
        length += 1;
        arr[length] = value;
        int i = length;
        int parent = i / 2;

        while (parent > 0)
        {
            if (arr[parent] < arr[i])
            {
                int temp = arr[parent];
                arr[parent] = arr[i];
                arr[i] = temp;
                i = parent;
                parent = i / 2;
            }
            else
                break;
        }
        return;
    }

    int deleteKey()
    {
        int x = arr[1];
        arr[1] = arr[length];
        length -= 1;

        int i = 1;
        int child = 2;
        while (child <= length)
        {
            if (child + 1 <= length && arr[child] < arr[child + 1])
            {
                child += 1;
            }
            if (arr[i] < arr[child])
            {
                int temp = arr[child];
                arr[child] = arr[i];
                arr[i] = temp;
                i = child;
                child = i * 2;
            }
            else
                break;
        }
        return x;
    }
    int peek()
    {
        int min;
        return min;
    }
    int size()
    {
        return length;
    }
    bool isEmpty()
    {
        return isEmpty;
    }
    void minHeapifyUp(int index)
    {
    }
    void minHeapifyDown(int root = 0)
    {
    }
    void printHeap()
    {
        cout << "==> minHeap: ";
        for (int i = 1; i <= length; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    MinHeap h;
    int menu;
    int no = 1;
    // int *arr = new int[n];
    while (no != 0)
    {
        cout << "1.Array to minHeap 2.insert 3.delete 4.print 0.quit > ";
        cin >> menu;

        if (menu == 1)
        {
            int n;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
                h.insertKey(arr[i]);
            }
            h.minHeapifyUp();
            h.printHeap();
        }
        else if (menu == 2)
        {
            int value;
            cin >> value;
            h.insertKey(value);
            h.minHeapifyUp();
            h.printHeap();
        }
        else if (menu == 3)
        {
            int x = h.deleteKey();
            cout << "=> Delete " << x << endl;
            h.printHeap();
        }
        else if (menu == 4)
        {
            h.printHeap();
        }
        else if (menu == 0)
        {
            cout << "bye!" << endl;
            no = 0;
        }
    }

    return 0;
}