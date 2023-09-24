#include <iostream>
using namespace std;

int main()
{
notEligible:
{

    cout << "You are not eligible to vote!\n";
}
    int age;
    cout << "Enter your age :";
    cin >> age;
    // goto
    if (age < 18)
        goto notEligible;
    else
        cout << "you are eligible to vote.";
    return 0;
}