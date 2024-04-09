#include <iostream>
using namespace std;

void calculateTotalnMost(int size, int *a);

int main()
{
    int size;
    int *a = new int[size];
    cin >> size;

    calculateTotalnMost(size, a);

    delete[] a;

    return 0;
}

void calculateTotalnMost(int size, int *a)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> *(a + i);
        total += *(a + i);
    }

    int most = a[0];
    for (int i = 1; i < size; i++)
    {
        if (*(a + i) > most)
            most = *(a + i);
    }
    cout << total << " " << most << endl;
}
