// MULTIPLE RECURSIVE CALLS
#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return n;
    }
    // recursive call
    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << n << " Fibonacci Number is: " << fibo(n) << endl;
    return 0;
}