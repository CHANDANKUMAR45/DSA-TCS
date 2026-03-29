#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> sender(n), receiver(n);
    vector<double> amount(n);
    vector<long long> time(n);

    for(int i = 0; i < n; i++) {
        cin >> sender[i] >> receiver[i] >> amount[i] >> time[i];
    }

    unordered_map<string, vector<pair<long long, int>>> mp;

    vector<bool> fraud(n, false);

    for(int i = 0; i < n; i++) {
        string key = sender[i] + "_" + receiver[i] + "_" + to_string(amount[i]);

        if(mp.find(key) != mp.end()) {
            for(auto &p : mp[key]) {
                if(abs(time[i] - p.first) <= 60) {
                    fraud[i] = true;
                }
            }
        }

        mp[key].push_back({time[i], i});
    }

    cout << "fraud detected :" << endl;

    for(int i = 0; i < n; i++) {
        if(fraud[i]) {
            cout << sender[i] << " "
                 << receiver[i] << " "
                 << amount[i] << " "
                 << time[i] << endl;
        }
    }

    return 0;
}