// Write a program in C++ to find the sum of the first 10 natural numbers
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    cout << "the first ten natural number" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " " << endl;
    }
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of first 10 natural numbers:" << sum << endl;
}