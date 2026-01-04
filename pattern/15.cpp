
/*

        A 
      B C D 
    E F G H I 
  J K L M N O P 

*/




#include<iostream>
using namespace std;

int main(){

    int n=4;

    char count='A';

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
        cout<<"  ";
        }

        for(int k=0;k<=2*i;k++){
        cout<<count++<<" ";
        }

        cout<<"\n";
    }

}