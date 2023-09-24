#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter value for x, y and z :";
    cin >> x >> y >> z;
    // nested if
    if (x > y)
    {
        if (x > z)
        {
            cout << "x is the biggest number.";
        }
        if (x < z)
        {
            cout << "z is the biggest number.";
        }
    }
    if (x < y)
    {
        if (y > z)
        {
            cout << "y is the biggest number.";
        }
        if (y < z)
        {
            cout << "z is the biggest number.";
        }
    }
    return 0;
}