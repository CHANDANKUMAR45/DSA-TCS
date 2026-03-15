//case 1:- When size of array is given

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n); //int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"OUTPUT"<<endl;

    for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";


    cout<<endl;

}