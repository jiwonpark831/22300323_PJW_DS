#include <iostream>
using namespace std;

class Heap
{
    int data[20];
    int size;

public:
    Heap()
    {
        size = 0;
    }
    void insert(int value)
    {
        size += 1;
        data[size] = value;
        int i = size;
        int parent = i / 2;

        while (parent > 0)
        {
            if (data[parent] < data[i])
            {
                int temp = data[parent];
                data[parent] = data[i];
                data[i] = temp;
                i = parent;
                parent = i / 2;
            }
            else
                break;
        }
        return;
    }

    int deletee()
    {
        int x = data[1];
        data[1] = data[size];
        size -= 1;

        int i = 1;
        int child = 2;
        while (child <= size)
        {
            if (child + 1 <= size && data[child] < data[child + 1])
            {
                child += 1;
            }
            if (data[i] < data[child])
            {
                int temp = data[child];
                data[child] = data[i];
                data[i] = temp;
                i = child;
                child = i * 2;
            }
            else
                break;
        }
        return x;
    }
    void printHeap()
    {
        cout << "==> Heap: ";
        for (int i = 1; i <= size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Heap h;
    int menu;
    while (1)
    {
        cout << "1.insert 2.delete 3.print 4.quit > ";
        cin >> menu;
        if (menu == 1)
        {
            int value;
            cout << "new value? ";
            cin >> value;
            h.insert(value);
            h.printHeap();
        }
        else if (menu == 2)
        {
            int x = h.deletee();
            cout << "=> Delete " << x << endl;
            h.printHeap();
        }
        else if (menu == 3)
        {
            h.printHeap();
        }
        else
            break;
    }
    cout << "Bye!" << endl;

    return 0;
}