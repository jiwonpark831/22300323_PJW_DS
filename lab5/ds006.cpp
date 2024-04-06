#include <iostream>
using namespace std;

struct st_gpa
{
    string name;
    int credit;
    int score;
    double gpa;
};

int main()
{
    st_gpa gpa[3];
    int total_credit = 0;
    string alp_score[3];
    double total_gpa = 0.0;
    for (int i = 0; i < 3; i++)
    {
        cin >> gpa[i].name >> gpa[i].credit >> gpa[i].score;

        if (gpa[i].score >= 95)
        {
            alp_score[i] = "A+";
            gpa[i].gpa = 4.5;
        }
        else if (gpa[i].score >= 90)
        {
            alp_score[i] = "A0";
            gpa[i].gpa = 4.0;
        }
        else if (gpa[i].score >= 85)
        {
            alp_score[i] = "B+";
            gpa[i].gpa = 3.5;
        }
        else if (gpa[i].score >= 80)
        {
            alp_score[i] = "B0";
            gpa[i].gpa = 3.0;
        }
        else if (gpa[i].score >= 75)
        {
            alp_score[i] = "C+";
            gpa[i].gpa = 2.5;
        }
        else if (gpa[i].score >= 70)
        {
            alp_score[i] = "C0";
            gpa[i].gpa = 2.0;
        }
        else if (70 > gpa[i].score)
        {
            alp_score[i] = "F";
            gpa[i].gpa = 0.0;
        }

        total_credit += gpa[i].credit;
        total_gpa += gpa[i].gpa * gpa[i].credit;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << fixed;
        cout.precision(1);
        cout << gpa[i].name << "(" << gpa[i].credit << ")     " << alp_score[i] << " " << gpa[i].gpa << endl;
    }
    double GPA = total_gpa / total_credit;
    cout << fixed;
    cout.precision(2);
    cout << "Total Credis " << total_credit << ", GPA " << GPA << endl;
}