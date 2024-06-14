#include <iostream>
using namespace std;
#include <vector>

bool compare(string a, string b)
{
    if (a.length() < b.length())
        return true;
    else if (a.length() > b.length())
        return false;
    else
        return a < b;
}

int main()
{
    int num;
    cin >> num;
    vector<string> v;
    for (int i = 0; i < num; i++)
    {
        string word;
        cin >> word;
        if (find(v.begin(), v.end(), word) == v.end())
            v.push_back(word);
    }
    sort(v.begin(), v.end(), compare);

    cout << "\n[result]" << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << endl;
    }
    return 0;
}