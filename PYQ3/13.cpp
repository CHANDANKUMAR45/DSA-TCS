// Method 1 — Brute Force (Basic Interview Method)
 
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x,y;
    cin>>n;

    vector<int> num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }

    cin>>x>>y;

    int count=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

            string a = to_string(num[i]);
            string b = to_string(num[j]);

            int val = stoi(a+b);

            if(val>=x && val<=y){
                count++;
            }
        }
    }

    cout<<count;
}