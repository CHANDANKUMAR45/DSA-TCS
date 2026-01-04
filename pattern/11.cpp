/*

1 
2 3 
4 5 6 
7 8 9 10 

*/


#include<iostream>
using namespace std;

int main(){

    int n=4;

    int count=1;

    for(int i=0;i<n;i++){

        for(int k=0;k<=i;k++){
        cout<<count++<<" ";
        }

        cout<<"\n";
    }

}