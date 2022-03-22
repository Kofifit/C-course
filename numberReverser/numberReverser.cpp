#include <iostream>
using namespace std;

int main()
{
    int number, numberReversed = 0;
    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        numberReversed *= 10;
        numberReversed += number % 10;
        number /= 10;
    }

    cout << "Reversed number is " << numberReversed;

    system("pause>0");
}

