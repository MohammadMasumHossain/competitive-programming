#include <iostream>
using namespace std;
int main()
{
    int a, fact = 1;
    cout << "Input a number to find the factorial:" << endl;
    cin >> a;
    for (int i = a; i >= 1; i--)
    {
        fact = fact * a;
        a = a - 1;
    }
    cout << "The factorial of the given number is:" << fact << endl;
}