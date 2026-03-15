//15 march 2025 pyq question

#include<bits/stdc++.h>
using namespace std;


//in question give i & j is 1-9999 if out of range give "Invalid input"

int main(){
    int i,j;
    cin>>i;
    cin>>j;

    if(i>=j || i<0 || j>=10000){
        cout<<"Invalid input"<<endl;
    }

    int sum=0;

    for(int start=i;start<=j;start++){
        sum+=start;
    }

    cout<<"SUM : "<<sum<<endl;
}