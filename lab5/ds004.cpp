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
    int kor, eng, math;
    st_score score;
    cin >> kor >> eng >> math;
    score.kor = kor;
    score.eng = eng;
    score.math = math;

    score.total = kor + eng + math;
    score.average = score.total / 3.0;

    string kor_poff;
    string eng_poff;
    string math_poff;

    if (kor > 70)
        kor_poff = "Pass";
    else
        kor_poff = "Fail";

    if (eng > 70)
        eng_poff = "Pass";
    else
        eng_poff = "Fail";

    if (math > 70)
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