#include <iostream>
using namespace std;

struct st_str
{
    string name;
    int price;
    string company;
};

int main()
{
    st_str s1, s2;
    cin >> s1.name >> s1.price >> s1.company;
    cin >> s2.name >> s2.price >> s2.company;

    return 0;
}