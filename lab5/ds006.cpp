#include <iostream>
using namespace std;

struct st_gpa
{
    string name;
    int credit;
    int score;
    double gpa;
    string alp_score;
};

void numtoalp(st_gpa &i);

int main()
{
    st_gpa gpa[3];
    int total_credit = 0;
    double total_gpa = 0.0;
    for (int i = 0; i < 3; i++)
    {
        cin >> gpa[i].name >> gpa[i].credit >> gpa[i].score;
        numtoalp(gpa[i]);

        total_credit += gpa[i].credit;
        total_gpa += gpa[i].gpa * gpa[i].credit;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << fixed;
        cout.precision(1);
        cout << gpa[i].name << "(" << gpa[i].credit << ")     " << gpa[i].alp_score << " " << gpa[i].gpa << endl;
    }
    double GPA = total_gpa / total_credit;
    cout << fixed;
    cout.precision(2);
    cout << "Total Credis " << total_credit << ", GPA " << GPA << endl;
}

void numtoalp(st_gpa &i)
{
    if (i.score >= 95)
    {
        i.alp_score = "A+";
        i.gpa = 4.5;
    }
    else if (i.score >= 90)
    {
        i.alp_score = "A0";
        i.gpa = 4.0;
    }
    else if (i.score >= 85)
    {
        i.alp_score = "B+";
        i.gpa = 3.5;
    }
    else if (i.score >= 80)
    {
        i.alp_score = "B0";
        i.gpa = 3.0;
    }
    else if (i.score >= 75)
    {
        i.alp_score = "C+";
        i.gpa = 2.5;
    }
    else if (i.score >= 70)
    {
        i.alp_score = "C0";
        i.gpa = 2.0;
    }
    else if (70 > i.score)
    {
        i.alp_score = "F";
        i.gpa = 0.0;
    }
}