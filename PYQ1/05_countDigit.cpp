#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cin>>n;
    cin>>r;

    int sum=0;
    while(n>0){
        int dig=n%10;
        sum+=dig;
        n/=10;
    }

    sum=sum*r;

    // int ans=0;

    // while(sum>0){

    //     int dig=sum%10;
    //     ans+=dig;
    //     sum/=10;

    //     if(sum<=0 && ans>9){
    //         sum=ans;
    //         ans=0;
    //     }
    // }

    // cout<<ans<<endl;

    //digit root formula
    int result=(int)(1+(sum-1)%9);
    cout<<result<<endl;

}