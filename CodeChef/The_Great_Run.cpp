#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, l; cin >> n >> l;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int ans = accumulate(v.begin(), v.begin() + l, 0);
    cout << ans << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}