#include <iostream>
using namespace std;

class Student
{
private:
    double getAvg()
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += score[i];
        }
        double avg = sum / 3.0;
        return avg;
    };

public:
    string name;
    string sid;
    int *score;
    void print()
    {
        double avg = getAvg();
        cout << "[" << sid << "] " << name << "\n"
             << "The Average score is " << avg << endl;
    }
};

int main()
{
    Student s1;
    s1.score = new int[3];

    cin >> s1.sid >> s1.score[0] >> s1.score[1] >> s1.score[2];
    cin >> s1.name;

    s1.print();
    delete[] s1.score;

    return 0;
}
