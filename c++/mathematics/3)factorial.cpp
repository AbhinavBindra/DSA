#include <iostream>
using namespace std;

// T.C: O(N) , S.C: O(1)
int solution1(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the input" << endl;
    cin >> n;
    cout << "Factorial: " << solution1(n) << endl;
    return 0;
}