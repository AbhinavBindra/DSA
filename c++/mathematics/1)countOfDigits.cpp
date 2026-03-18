// Given a number n, count number of digits in that number.
#include <iostream>
using namespace std;

// T.C: O(log(n))
int solution1(int n)
{
    int res = 0;
    while (n > 0)
    {
        res++;
        n = n / 10;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the input: " << endl;
    cin >> n;

    int res = solution1(n);
    cout << "res: " << res;
    return 0;
}
