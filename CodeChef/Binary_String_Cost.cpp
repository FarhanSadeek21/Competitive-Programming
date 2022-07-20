#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a, b, c, ans, val1 = 0, val2 = 0; cin >> a >> b >> c;
    string s; cin >> s;
    sort(s.begin(), s.end());
    for(int i = 0; i < a - 1; i++){
        if(s[i] == '0' && s[i + 1] == '1'){
            val1 += b;
        }
        else if(s[i] == '1' && s[i + 1] == '0'){
            val1 += c;
        }
    }
    
    reverse(s.begin(), s.end());
    for(int i = 0; i < a - 1; i++){
        if(s[i] == '0' && s[i + 1] == '1'){
            val2 += b;
        }
        else if(s[i] == '1' && s[i + 1] == '0'){
            val2 += c;
        }
    }
    if(val1 > val2) ans = val2;
    else ans = val1;
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}