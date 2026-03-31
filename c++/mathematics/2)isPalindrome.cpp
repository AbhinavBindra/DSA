#include <iostream>
using namespace std;

// T.C: O(log(n))
bool solution1(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }
    return (rev == n);
}

int main()
{
    int n;
    cout << "Enter the input" << endl;
    cin >> n;
    cout << "is Palindrome: " << solution1(n);
    return 0;
}