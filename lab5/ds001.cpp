#include <iostream>
using namespace std;

int main(){
    int height;
    int weight;

    cin >> height >> weight;

    float mheight = height/100.0;

    double bmi = weight / (mheight*mheight);

    if (bmi >= 25.0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

return 0;

}