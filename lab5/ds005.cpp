#include <iostream>
using namespace std;
#include <string>
#include <cctype>

int main()
{
    char sentence[50];
    cin.getline(sentence, 50);
    int blank = 0;
    for (int i = 0; i < strlen(sentence); i++)
    {
        if (isalpha(sentence[i]))
        {
            sentence[i] = toupper(sentence[i]);
        }
        else if (sentence[i] == ' ')
            blank++;
    }

    cout << "blank : " << blank << endl;

    for (char i = 'A'; i <= 'Z'; i++)
    {
        int alpha_num = 0;
        for (int j = 0; j < strlen(sentence); j++)
        {
            if (sentence[j] == i)
                alpha_num++;
        }
        if (alpha_num != 0)
            cout << i << " : " << alpha_num << endl;
    }
}
