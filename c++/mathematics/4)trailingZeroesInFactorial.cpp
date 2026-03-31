#include <iostream>
using namespace std;

int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

// T.C: O(N) + O(Log(n))
int solution1(int n)
{
    int res = 0;
    // steps
    //  step 1: Find Factorial
    int factorial = fact(n);
    //  step 2: Find trailing zeroes
    while (factorial % 10 == 0)
    {
        res++;
        factorial = factorial / 10;
    }
    return res;
}

// T.C = O(Log(n))
int solution2(int n)
{
    // Intuiton
    // Trailing zeroes are formed because of 2 and 5. and so, if we get the count of 2's and 5's, we will be able to give out all trailing zeroes.
    // Further, If we just get the count of 5's, we will be just fine as number of 2s >> number of 5s.
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
        cout << "res: " << res;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the input: ";
    cin >> n;
    int ans = solution1(n);
    cout << "Number of trailing zeroes: " << ans << endl;
    int ans2 = solution2(n);
    cout << "Number of trailing zeroes: " << ans2;

    return 0;
}
