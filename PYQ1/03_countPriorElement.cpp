#include<bits/stdc++.h>
using namespace std;
int countGreater(int arr[],int n){
    int cnt=1;
    int leftmax=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>leftmax){
            cnt++;
            leftmax=arr[i];
        }
    }

    return cnt;
}
int main(){

    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter element of array : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<countGreater(arr,n)<<endl;

}