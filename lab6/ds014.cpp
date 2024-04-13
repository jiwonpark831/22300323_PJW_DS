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
    cout << notabl << endl;

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
