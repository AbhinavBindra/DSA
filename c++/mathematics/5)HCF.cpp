#include <iostream>
using namespace std;
// SIENE ALGORITHM FOR COMPETITIVE PROGRAMMING: Refer to Ipad Notes
//  T.C. O(min(a,b))
int solution1(int a, int b)
{
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

// T.C. O(Log(min(a,b)))
int solution2(int a, int b)
{
    // Euclidean Algorithm --> states that for two numbers, say a and b:
    // if(a>b), then gcd(a,b) = gcd(a-b,b)
    // PROOF
    //     lets say gcd(a,b)=g
    //     a=gx and b=gy and gcd(x,y)=1
    //     a-b =g(x-y)
    // gcd(a,b)=gcd(a-b,b)=g

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

// T.C. O(Log(min(a,b)))
int solution3(int a, int b)
{
    // Euclidean Algorithm --> states that for two numbers, say a and b:
    // if(a>b), then gcd(a,b) = gcd(a-b,b)
    // PROOF
    //     lets say gcd(a,b)=g
    //     a=gx and b=gy and gcd(x,y)=1
    //     a-b =g(x-y)
    // gcd(a,b)=gcd(a-b,b)=g

    if (b == 0)
        return a;
    else
        return solution3(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter the inputs (a and b)";
    cin >> a >> b;

    // int ans1 = solution1(a, b);
    // cout << "HCF: " << ans1;

    // int ans2 = solution2(a, b);
    // cout << "HCF2: " << ans2;

    int ans3 = solution3(a, b);
    cout << "HCF3: " << ans3;
    return 0;
}