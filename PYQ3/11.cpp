#include<bits/stdc++.h>
using namespace std;

int main(){
    int total_income=0;
    int total_expense=0;
    cin>>total_income;
    cin.ignore();

    unordered_map<string,int>mp;
    vector<string>v;

    while(true){
        string cat="";
        int exp;

        getline(cin,cat);

        if(cat=="done"){
            break;
        }
        cin>>exp;
        cin.ignore();

        if(mp.find(cat)==mp.end()){
            v.push_back(cat);
        }

        mp[cat]+=exp;
        total_expense+=exp;

    }

    cout<<total_income<<endl;
    cout<<total_expense<<endl;
    cout<<total_income-total_expense<<endl;

    for(string s:v){
        cout<<s<<":"<<mp[s]<<endl;
    }
}