#include <iostream>
using namespace std;

int main()
{
    int x = 8, y = 10;
    cout << "Enter value for x and y :";
    cin >> x >> y;
    // Relational Operators
    if (x == y)
        cout << "x is equals to y.\n";
    if (x != y)
        cout << "x is not equals to y.\n";
    if (x < y)
        cout << "x is smaller than y.\n";
    if (x > y)
        cout << "x greater than y.\n";
    if (x <= y)
        cout << "x is equals or less than y.\n";
    if (x >= y)
        cout << "x is equals or greater than y.\n";
}