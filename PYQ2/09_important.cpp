// Taking Array Input Without Knowing Size

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);

    vector<int> arr;

    string token;

    while(getline(ss, token, ','))
    {
        int num = stoi(token);
        arr.push_back(num);
    }

    for(int x : arr)
        cout << x << " ";
}