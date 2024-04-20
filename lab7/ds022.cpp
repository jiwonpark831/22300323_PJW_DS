#include <iostream>
using namespace std;

class Grade
{
public:
    string name;
    int LC;
    int RC;
    void print()
    {
        cout << "[" << name << "]" << endl;
        if (LC >= 350)
            cout << "LC - " << LC << " Pass" << endl;
        else
            cout << "LC - " << LC << " Fail" << endl;
        if (RC >= 350)
            cout << "RC - " << RC << " Pass" << endl;
        else
            cout << "RC - " << RC << " Fail" << endl;

        cout << "Total - " << LC + RC << endl;
    }
};

int main()
{
    Grade s1;
    cin >> s1.name;
    cout << "LC> ";
    cin >> s1.LC;
    while (s1.LC < 0 || s1.LC > 495)
    {
        cout << "LC> ";
        cin >> s1.LC;
    }
    cout << "RC> ";
    cin >> s1.RC;
    while (s1.RC < 0 || s1.RC > 495)
    {
        cout << "RC> ";
        cin >> s1.RC;
    }
    s1.print();
}