#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector <char> v;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'H' || s[i] == 'T'){
            v.push_back(s[i]);
        }
    }

    if(v.size() % 2 != 0){
        cout << "Invalid" << "\n";
        return;
    }


    for(int i = 0; i < v.size(); i += 2){
        if(v[i] == 'H' && v[i + 1] == 'T'){
            continue;
        }
        else {
            cout << "Invalid" << "\n";
            return;
        }
    }
    cout << "Valid" << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}