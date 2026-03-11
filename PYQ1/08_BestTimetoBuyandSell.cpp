#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
    cin>>arr[i];
    }

    int minprice=arr[0];
    int profit=0;

    for(int i=0;i<n;i++){

        profit=max(profit,arr[i]-minprice);
        minprice=min(minprice,arr[i]);
    }

    cout<<"Profit : "<<profit;
    cout<<endl;
}