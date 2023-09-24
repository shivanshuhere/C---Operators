#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "Enter value for n :";
    cin >> n;
    // do-while loop
    do
    {
        cout << i << "\n";
        i++;
    } while (i <= n);
    return 0;
}