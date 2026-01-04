
#include<iostream>
using namespace std;

int main(){

    int n=4;

    int count=1;

    for(int i=0;i<n;i++){
       
     for(int k=0;k<n-i;k++)
     cout<<"  ";

        for(int j=0;j<=2*i;j++)
        {
            if(j==0 || j==2*i || i==n-1)
            cout<<count++<<" ";
            else 
               cout<<"  ";

        }

        cout<<"\n";
    }

}