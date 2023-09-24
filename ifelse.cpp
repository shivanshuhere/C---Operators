#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value for n :";
    cin >> n;
    // if else
    if (n % 2 == 0)
        cout << "Number is even.\n";
    else
        cout << "Number is odd.\n";
    return 0;
}