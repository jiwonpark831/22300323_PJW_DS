#include <iostream>
using namespace std;

struct st_score
{
    int kor, eng, math;
    int total;
    double average;
};

int main()
{
    st_score score;
    cin >> score.kor >> score.eng >> score.math;

    score.total = score.kor + score.eng + score.math;
    score.average = score.total / 3.0;

    string kor_poff;
    string eng_poff;
    string math_poff;

    if (score.kor > 70)
        kor_poff = "Pass";
    else
        kor_poff = "Fail";

    if (score.eng > 70)
        eng_poff = "Pass";
    else
        eng_poff = "Fail";

    if (score.math > 70)
        math_poff = "Pass";
    else
        math_poff = "Fail";
    cout << fixed;
    cout.precision(1);
    cout << score.total << " " << score.average << endl;
    cout << "Korean - " << kor_poff << endl;
    cout << "English - " << eng_poff << endl;
    cout << "Math - " << math_poff << endl;
}