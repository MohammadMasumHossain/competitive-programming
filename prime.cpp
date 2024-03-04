#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Input a number to check prime or not:" << endl;
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
            break;
        }
    }
    if (count < 1)
        cout << "The entered number is a prime number" << endl;
}