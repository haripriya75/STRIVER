#include <bits/stdc++.h>
using namespace std;
void printNto1_BackTracking(int n, int i)
{
    // base case
    if (n < i)
    {
        return;
    }
    // recursive call
    printNto1_BackTracking(n, i + 1);
    cout << i << endl;
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    printNto1_BackTracking(n, 1);
    return 0;
}