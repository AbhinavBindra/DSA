#include <iostream>
using namespace std;

// T.C. O(n)
int solution1(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// T.C.= O(sqrt(n))
int solution2(int n)
{
    // Divisor always appear in pairs
    // if(x,y) is pair, x*y=n
    // And if x<=y, x*x<=N, x<=sqrt(n)
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// T.C. o(sqrt(n)/3)
int solution3(int n)
{
    if (n == 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the input: " << endl;
    cin >> n;
    // int ans1 = solution1(n);
    // cout << "ans: " << ans1 << endl;

    // int ans2 = solution2(n);
    // cout << "ans2: " << ans2 << endl;

    int ans3 = solution3(n);
    cout << "ans3: " << ans3 << endl;
    return 0;
}