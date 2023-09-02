#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>> &ans, vector<int> &output, int index, vector<int> &arr)
{
    // base case
    if (index == arr.size())
    {
        ans.push_back(output);
        return;
    }

    // not include
    solve(ans, output, index + 1, arr);

    // include element
    int ele = arr[index];
    output.push_back(ele);
    solve(ans, output, index + 1, arr);
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
    vector<vector<int>> ans;
    vector<int> output;
    solve(ans, output, 0, arr);
    cout << "Subsequences: " << endl;
    for (auto &it : ans)
    {
        for (auto &j : it)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}