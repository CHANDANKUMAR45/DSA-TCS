#include<bits/stdc++.h>
using namespace std;

//case--->[1,2,3,4,5,6] or {1,2,3,4,5,6,7}

int main(){

string s;
getline(cin,s);
vector<int>arr;

if(s.front()=='[' && s.back()==']'){
    s=s.substr(1,s.length()-2);
}
stringstream ss(s);
string token;

while(getline(ss,token,',')){
    int num=stoi(token);
    arr.push_back(num);
}

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

}