// Minimum Array Rotations
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    vector<int> arr1;
    vector<int> arr2;

    stringstream ss1(s1);
    string num1;

    while(getline(ss1,num1,',')){
        arr1.push_back(stoi(num1));
    }

    stringstream ss2(s2);
    string num2;

    while(getline(ss2,num2,',')){
        arr2.push_back(stoi(num2));
    }

    int n = arr1.size();
    int leftRot = -1;

    // Find index where arr2[0] occurs in arr1
    for (int i = 0; i < n; i++) {
        if (arr1[i] == arr2[0]) {
            leftRot = i;
            break;
        }
    }

    if (leftRot == -1) {
        cout << -1; // Not possible
        return 0;
    }

    int rightRot = n - leftRot;

    cout << min(leftRot, rightRot)<<endl;

    return 0;
}