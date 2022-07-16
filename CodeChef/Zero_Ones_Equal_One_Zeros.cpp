#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    for(unsigned int i = 1; i <= n; i++){
        if(i == 1 || i == n){
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}