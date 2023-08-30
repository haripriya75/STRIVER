#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive call
    cout << "Hari" << endl;
    printName(n - 1);
}
int main()
{
    printName(5);
    return 0;
}