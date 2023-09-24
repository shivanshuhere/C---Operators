#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value for n :";
    cin >> n;
    // break
    for (int i = 1; i <= 10; i++)
    {
        if (i == n)
            continue;
        cout << i << "\n";
    }
    return 0;
}