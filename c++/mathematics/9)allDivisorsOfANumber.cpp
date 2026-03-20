#include <iostream>
using namespace std;

// T.C. = O(N)
void solution1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// T.C.: O(sqrt(n))
void solution2(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}

// T.C.: O(sqrt(n))
void solution3(int n)
{
    int i;
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (i = i - 1; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << (n / i) << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the input " << endl;
    cin >> n;
    // solution1(n);
    // solution2(n);
    solution3(n);
    return 0;
}