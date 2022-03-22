#include <iostream>
using namespace std;

int main()
{   
    // This function get the height and weight of the user.
    // It returns his BMI score as the output icluding a message indicating if he's under, over or normal weight

    float w, h, bmi;
    int u;

    cout << "For metric units (kg and m) enter 0 / for imperial units (pounds and inches) enter 1: " << endl;
    cin >> u;
    cout << "Height, weight:  " << endl;
    cin >> h >> w;

    bmi = w / (h * h);

    if (u == 1)
        bmi *= 703;

    if (bmi < 18.5)
        cout << "Underweight" << endl;
    else if (bmi < 25)
        cout << "Normal weight" << endl;
    else
        cout << "Overweight" << endl;

    cout << "Bmi is: " << bmi;

    system("pause>0");

}

