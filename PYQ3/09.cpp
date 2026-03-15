#include<iostream>
using namespace std;

bool isPrime(int n ){

    if(n<2) return false;

    for(int i=0;i*i<=n;i++){
        if(n%i==0) return false;
    }

    return true;

}


int sumOfPrimes(int n){
    int sum=0;
    int count=0;

    for(int num=2;count<n;num++){
        if(sumOfPrimes(num)){
            sum+=num;
            count++;
        }
    }

    return sum;
}

int main(){
    int n;
    cin>>n;

    int result=sumOfPrimes(n);
    cout<<"ans : "<<result<<endl;
}