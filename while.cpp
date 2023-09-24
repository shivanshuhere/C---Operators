#include <iostream>
using namespace std;

int main()
{
    int n, i = 1, odd = 0, even = 0;
    cout << "Enter value for n :";
    cin >> n;
    // while loop
    while (n != i)
    {
        if (i % 2 != 0)
            odd++;
        else
            even++;
        i++;
    }
    cout << even << " even numbers and " << odd << " odd numbers between 1 to " << n << ".\n";
    return 0;
}