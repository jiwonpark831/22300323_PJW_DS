#include <iostream>
using namespace std;

struct st_gpa
{
    string name;
    int credit;
    int score;
    int gpa;
};

int main(){
    st_gpa gpa;
    cin >> gpa.name >> gpa.credit >> gpa.score;
}