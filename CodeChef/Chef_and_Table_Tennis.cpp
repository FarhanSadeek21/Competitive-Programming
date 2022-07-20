#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    int one = 0, zero = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '0') {
            zero += 1;
        }
        else if(s[i] == '1'){
            one += 1;
        }
    }
    if (zero > one){
        cout << "LOSE";
    }
    else {
        cout << "WIN";
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