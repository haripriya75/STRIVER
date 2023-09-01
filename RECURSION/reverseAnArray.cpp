#include <bits/stdc++.h>
using namespace std;
// if we only use i (one parameter) i < n/2 swap i, n - i - 1
void reverseArray(vector<int> &arr, int i, int j)
{
    // base case
    if (i >= j)
    {
        return;
    }
    // recursive call
    swap(arr[i], arr[j]);
    reverseArray(arr, i + 1, j - 1);
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr, 0, n - 1);
    cout << "Reversed Array: " << endl;
    for (auto &it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}