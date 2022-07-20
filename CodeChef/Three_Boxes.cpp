#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, d; cin >> a >> b >> c >> d;\
    int sum = a + b + c;
    if(sum % d == 0) cout << sum / d << endl;
    else {
        cout << sum / d + 1 << endl;
    }
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}