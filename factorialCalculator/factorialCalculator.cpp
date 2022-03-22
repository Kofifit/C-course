#include <iostream>
using namespace std;

int main()
{
    while (true){

        int number;
        long long result = 1;

        cout << "Please enter a number: ";
        cin >> number;

        if (number == 0)
            cout << "The factorial of 0 is 1\n";
        else if (number < 0)
            cout << "The factorial of a negative number cannot be calculated in this program.\n";
        else {
            for (int n = number; n > 0; n--) {
                result *= n;
            }

            cout << "The factorial of " << number << " is " << result << endl;
        }
    }
    system("pause>0"); 
}


