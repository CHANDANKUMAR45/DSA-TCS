/*


*/




#include<iostream>
using namespace std;

int main(){

    int n=4;

    int count=1;

    for(int i=n;i<0;i--){
        for(int j=0;j<i;j--){
        cout<<"  ";
        }

        for(int k=i;k>i;k--){
        cout<<"* ";
        }
        count++;

        cout<<"\n";
    }

}