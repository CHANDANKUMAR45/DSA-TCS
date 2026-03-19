#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;

    getline(cin,s);

    if(s[0]=='[' && s[s.length()-1]==']'){
        s=s.substr(1,s.length()-2);
    }

    stringstream ss(s);

    vector<string>arr;

    string temp;

    while(getline(ss,temp,',')){

          // remove quotes
        if(temp[0]=='"' && temp[temp.length()-1]=='"'){
            temp = temp.substr(1, temp.length()-2);
        }
        
        arr.push_back(temp);
    }

    sort(arr.begin(),arr.end());

    string first=arr[0];
    string last=arr[arr.size()-1];

    string ans="";

    for(int i=0;i<first.length();i++){
        if(first[i]==last[i]){
            ans+=first[i];
        }
        else {
            break;
        }
    }

    cout<<"ANS : "<<ans<<endl;;



}