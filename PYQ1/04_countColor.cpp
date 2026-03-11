#include<bits/stdc++.h>
using namespace std;

int maxAqua(string s, int L){
    int n=s.length();
    int ans=0;

    for(int i=0;i<n;i+=L){
        int cnt=0;

        for(int j=i;j<i+L;j++){
            if(s[j]=='a')
            cnt++;
        }
        ans=max(ans,cnt);
    }

    return ans;

}
int main(){

    string s;
    int L;

    cout<<"Enter the String : ";
    cin>>s;

    cout<<"Enter the length of box : ";
    cin>>L;
  
    cout<<maxAqua(s,L);


}