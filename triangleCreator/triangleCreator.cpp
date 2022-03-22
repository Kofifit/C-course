#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int length;
    char shape;
    cout << "Please enter length: ";
    cin >> length;
    cout << "Please enetr a shape: ";
    cin >> shape;

    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= i; j++) {
            cout << setw(2) << shape;
        }
        cout << endl;
    }
    for (int i = length; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << setw(2) << shape;
        }
        cout << endl;
    }
}

