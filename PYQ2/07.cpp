#include<bits/stdc++.h>
using namespace std;

int main() {
    string day;
    int n;
    cin >> day >> n;

    map<string, int> mp;
    mp["sun"]=0;
    mp["mon"]=1;
    mp["tue"]=2;
    mp["wed"]=3;
    mp["thu"]=4;
    mp["fri"]=5;
    mp["sat"]=6;

    int start = mp[day];

    int total = n / 7;
    int rem = n % 7;

    // check remaining days
    for(int i = 0; i < rem; i++) {
        if((start + i) % 7 == 0) {
            total++;
        }
    }

    cout << total;
}