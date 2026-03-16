#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    if(n<2) return false;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        return false;
    }

    return true;
}

int nthPrime(int n){

    int count=0;
    int num=2;

    while(true){

        if(isPrime(num)){
            count++;
        }

        if(count==n){
            return num;
        }

        num++;
    }
}

int main(){

    int n1,n2;
    cin>>n1>>n2;

    int p1=nthPrime(n1);
    int p2=nthPrime(n2);

    cout<<(p1*p2)-1;
}