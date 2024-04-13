#include <iostream>
using namespace std;
#include <string>

string ltrim(string &t);
string rtrim(string &t);

int main()
{
    string t;
    getline(cin, t);

    string notabf = ltrim(t);
    string notabl = rtrim(notabf);

    int num = 0;
    for (int i = notabl.size(); i >= 0; i--)
        if (notabl[i] == ' ')
            break;
        else
            num++;

    cout << num - 1 << endl;

    return 0;
}

string ltrim(string &t)
{
    t.erase(0, t.find_first_not_of(" \t"));
    return t;
}

string rtrim(string &t)
{
    t.erase(t.find_last_not_of(" \t") + 1);
    return t;
}
