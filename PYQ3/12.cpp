#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    if(s.size()==0){
        cout<<"Invalid Input";
        return 0;
    }

    unordered_map<char,int> freq;

    for(char c:s){
        freq[c]++;
    }

    char firstNon='0';
    for(char c:s){
        if(freq[c]==1){
            firstNon=c;
            break;
        }
    }

    int maxFreq=0;
    char mostRep;

    for(auto x:freq){
        if(x.second>maxFreq){
            maxFreq=x.second;
            mostRep=x.first;
        }
    }

    if(firstNon=='0'){
        cout<<"None "<<mostRep;
    }
    else{
        cout<<firstNon<<" "<<mostRep;
    }
}