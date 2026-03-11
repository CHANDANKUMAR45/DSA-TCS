#include<bits/stdc++.h>
using namespace std;

int main(){
     
    string s;
    cin>>s;

    int n;
    cin>>n;

    unordered_map<string,int>mp;
    mp["sun"]=0;
    mp["mon"]=1;
    mp["tue"]=2;
    mp["wed"]=3;
    mp["thu"]=4;
    mp["fri"]=5;
    mp["sat"]=6;

    int start=mp[s.substr(0,3)];
    
    //day needed to reach first sunday
    int firstsun=(7-start)%7;

    int ans=0;

    if(firstsun<n){
        ans=1+(n-firstsun-1)/7;
    }

    cout<<ans<<endl;
}