#include <bits/stdc++.h>
using namespace std;
void print1toN(int n, int x)
{
    // base case
    if (x > n)
    {
        return;
    }
    // recursive call
    cout << x << endl;
    print1toN(n, x + 1);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    print1toN(n, 1);
    return 0;
}