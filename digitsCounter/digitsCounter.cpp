#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    long long number;
    int counter;
    counter = 0;

    cout << "Please enter a number: \n";
    cin >> number;

    if (number == 0)
        cout << "You have entered the number 0!";

    while (number != 0) {
        number /= 10;
        counter ++;
    }

    cout << "Number contains " << counter << " digits.\n";

    system("pause>0");
}

