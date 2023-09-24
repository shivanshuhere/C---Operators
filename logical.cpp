#include <iostream>
using namespace std;

int main()
{
    int x, y, z, choice;
    cout << "Enter value for x, y and z :";
    cin >> x >> y >> z;
    // logical operators
    if (x < y && z < y) // && - and operator
        cout << "y is the biggest number.\n";
    else if (x > y && x > z)
        cout << "x is the biggest number.\n";
    else
        cout << "z is the biggest number.\n";
    if (x < y || z < y) // || - or operator
        cout << "y is greater to at least one number.\n";
    if (y < x || z < x)
        cout << "x is greater to at least one number.\n";
    if (x < z || y < z)
        cout << "z is greater to at least one number.\n";
    cout << "is it raining outside ? (use 0 or 1)";
    cin >> choice;
    if (choice != 0) // ! - not operator
        cout << "You should stay at home.\n";
    else
        cout << "You can go outside.\n";
    return 0;
}