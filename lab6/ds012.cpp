#include <iostream>
using namespace std;
#include <string>

struct st_str
{
    string name;
    int price;
    string company;
};

bool eqOrNoteq(string &s1, string &s2, int &p1, int &p2);

int main()
{
    st_str s1, s2;
    cin >> s1.name >> s1.price >> s1.company;
    cin >> s2.name >> s2.price >> s2.company;

    if (eqOrNoteq(s1.name, s2.name, s1.price, s2.price))
        cout << s1.name << " is equal" << endl;
    else
        cout << s1.name << " and " << s2.name << " is not equal" << endl;

    return 0;
}

bool eqOrNoteq(string &s1, string &s2, int &p1, int &p2)
{
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.length(); i++)
        if (toupper(s1[i]) == toupper(s2[i]))
        {
            if (p1 == p2)
                return true;
        }
    return false;
};