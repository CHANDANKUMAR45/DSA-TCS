#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];

    cout<<"Element of arry : ";

    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr[i]=t;
    }

    int index=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=0){
        arr[index++]=arr[i];
        }
    }

    while(index<n){
        arr[index++]=0;
    }


    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl;


}

// INPUT
// 10
// 1 0 2 3 2 0 0 4 5 1 
