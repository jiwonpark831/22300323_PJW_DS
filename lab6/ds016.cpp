#include <iostream>
using namespace std;
#include <string>

string prefix(string &s1, string &s2, string &s3);

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string pf = prefix(s1, s2, s3);
    cout << pf << endl;

    return 0;
}

string prefix(string &s1, string &s2, string &s3)
{
    string pf;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i] && s2[i] == s3[i])
            pf += s1[i];
        else
            break;
    }
    if (pf.empty())
        pf = "?";

    return pf;
}