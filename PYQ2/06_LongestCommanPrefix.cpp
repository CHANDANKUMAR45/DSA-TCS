#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> arr(n);

    // input strings
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort the strings
    sort(arr.begin(), arr.end());

    string first = arr[0];
    string last = arr[n-1];

    string prefix = "";

    int len = min(first.length(), last.length());

    for(int i = 0; i < len; i++)
    {
        if(first[i] == last[i])
        {
            prefix += first[i];
        }
        else
        {
            break;
        }
    }

    cout << prefix;

    return 0;
}