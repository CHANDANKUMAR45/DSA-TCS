// Maximum Product Subarray

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
    int maxProduct = arr[0];

    for(int i = 0; i < n; i++) {
        int product = 1;

        for(int j = i; j < n; j++) {
            product *= arr[j];
            if(product > maxProduct)
                maxProduct = product;
        }
    }

    cout << maxProduct<<endl;
    return 0;
}