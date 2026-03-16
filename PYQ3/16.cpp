#include<bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> &arr, int target, int tempsum, int index) {

    if(target == tempsum) 
        return true;

    if(index == arr.size()) 
        return false;

    bool c1 = isSubsetSum(arr, target, tempsum + arr[index], index + 1);

    bool c2 = isSubsetSum(arr, target, tempsum, index + 1);

    return c1 || c2;
}

int main() {

    int n, target;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> target;

    if(isSubsetSum(arr, target, 0, 0)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}