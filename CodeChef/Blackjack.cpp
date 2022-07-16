#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b; cin >> a >> b;
    if((a + b) < 11){
        cout << -1 << "\n";
    }
    else{
        cout << 21 - (a + b) << "\n";
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}