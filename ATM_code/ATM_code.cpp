#include <iostream>
using namespace std;

int main()
{
    int users_PIN = 1234, pin, attemptsCounter = 0;

    cout << "** ATM **" << endl;

    do {
        cout << "Please enter your PIN code: " << endl;
        cin >> pin;
        if (pin != users_PIN)
            attemptsCounter++;        
    } while (pin != users_PIN && attemptsCounter < 3); 

    if (pin == users_PIN)
        cout << "Please wait while your account is loading...";
    else
        cout << "You have entered the wrong PIN code too many times. \nThe account has been blocked.";

    system("pause>0");

}

