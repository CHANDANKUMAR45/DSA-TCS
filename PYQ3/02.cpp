
//without knowing array size 

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    vector<int>arr;

    stringstream ss(s);

    int num;

    while(ss>>num){
        arr.push_back(num);
    }

    for(int ans:arr){
        cout<<ans<<" ";
    }

    return 0;
}