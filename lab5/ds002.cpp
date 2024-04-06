#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    double x1, y1;
    double x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << distance << endl;
}