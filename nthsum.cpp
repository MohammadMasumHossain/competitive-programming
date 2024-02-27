#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter a number " << endl;
    cin >> n;
    cout << "The natural numbers upto 7th terms are:" << endl;

    for (int i = 0; i < =n; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << endl;
    cout << "sum" << sum;
}