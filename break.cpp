#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value for n :";
    cin >> n;
    // break
    for (int i = 1; i <= 100; i++)
    {
        if (i == n)
            break;
        cout << i << "\n";
    }
    return 0;
}