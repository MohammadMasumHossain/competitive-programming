#include <iostream>
using namespace std;
int main()
{
    int a, b, count = 0, total = 0;
    cout << "Input number for starting range:" << endl;
    cin >> a;
    cout << "Input number for ending range:" << endl;
    cin >> b;
    cout << "The prime numbers between" << a << "and" << b << "are:";
    for (int i = a; i < b; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count = count + 1;
            }
        }
        if (count < 1 && i != 1)
        {
            cout << i << endl;
            total = total + 1;
        }
        count = 0;
    }
    cout << "The total number of prime numbers between" << a << "to" << b << "is:" << total;
}
