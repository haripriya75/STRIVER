#include <bits/stdc++.h>
using namespace std;
void print1toN_BackTracking(int n, int x)
{
    // base case
    if (x < 1)
    {
        return;
    }
    // recursive call
    print1toN_BackTracking(n, x - 1);
    cout << x << endl;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print1toN_BackTracking(n, n);
    return 0;
}