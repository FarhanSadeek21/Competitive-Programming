#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    int sum  = 0;
    unordered_map <int, int> m;
    for(int i = 0; i < n; i++){
        pair <int, int> p; cin >> p.first >> p.second;
        m.insert(p);
    }
    for(auto & i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << sum << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}