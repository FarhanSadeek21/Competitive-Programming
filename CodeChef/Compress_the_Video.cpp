#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, c = 1; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n - 1; ++i){
        if(v[i] != v[i + 1]){
            c++;
        }
    }
    cout << c << endl;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}