// Multiply Non-Zero
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    vector<int>arr;

    stringstream ss(s);
    string num;

    while(getline(ss,num,',')){
        arr.push_back(stoi(num));
    }

    int n=arr.size();

    long long product = 1;
    bool checkzero = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            product *= arr[i];
            checkzero = true;
        }
    }

    if(checkzero == false)
        cout << 0<<endl;
    else
        cout << product<<endl;

    return 0;
}