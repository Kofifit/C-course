#include <iostream>
using namespace std;

int main()
{
    int hNum, gNum;

    cout << "Host please enter your number: ";
    cin >> hNum;
    system("cls");
    cout << "Guest please guess the number: ";
    cin >> gNum;

    (gNum == hNum) ? cout << "Correct!" : cout << "Failed!"; // Ternary operator (conditions without if/else loop)

    /* if (gNum == hNum)
        cout << "Correct!";
    else
        cout << "Failed!";*/

    /* while (gNum != hNum) {

        if (gNum > hNum)
            cout << "Hint: The number is lower than your guess" << endl;
        else
            cout << "Hint: the number is higher than your guess" << endl;

        cout << "Guess again: ";
        cin >> gNum;

        if (gNum == hNum)
            cout << "Hurray!! You guessed correctly :)";
    }*/

    system("pause>0");
}

