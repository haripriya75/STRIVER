#include <bits/stdc++.h>
using namespace std;
void printNto1(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive call
    cout << n << endl;
    printNto1(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printNto1(n);
    return 0;
}