#include <bits/stdc++.h>
using namespace std;

void solve(){
    int v[11];
    int n, sum = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v[x] = y;
    }
    for(int i = 0; i < n; i++){
        sum += v[i];
    }
    cout << sum << endl;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}