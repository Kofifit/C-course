#include <iostream>
using namespace std;

float function(int y, int x) 
{   
    cout << y << endl;
    cout << x << endl;
    return (float)y / (float)x;
}

void main()
{
    int num1, num2;
    float g;
    cout << "Please write two numbers: " << endl;
    cin >> num1 >> num2;
    g = function(num1, num2);
    cout << "Result: " << g;
    system("pause>0");
}

