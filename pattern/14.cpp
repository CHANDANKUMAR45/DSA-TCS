
/*

1 3 5 7 
  9 11 13 
    15 17 
      19 

*/
#include<iostream>
using namespace std;

int main(){

    int n=4;

    int count=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
        cout<<"  ";
        }

        for(int k=0;k<n-i;k++){
        cout<<count<<" ";
        count=count+2;
        }

        cout<<"\n";
    }

}