#include <iostream>
using namespace std;

// T.C.: O(Log(min(a,b)))
int gcd1(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd1(b, a % b);
}

// T.C: (O(a*b-max(a,b)))
int solution1(int a, int b)
{
    int res = max(a, b);
    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            return res;
        }
        res++;
    }
    return res;
}

int solution2(int a, int b)
{
    int gcd = gcd1(a, b);
    return (a * b) / gcd;
}

int main()
{
    int a, b;
    cout << "Enter the inputs (a &b): " << endl;
    cin >> a >> b;
    // int ans1 = solution1(a, b);
    // cout << "LCM: " << ans1;

    int ans2 = solution2(a, b);
    cout << "LCM2: " << ans2;
    return 0;
}