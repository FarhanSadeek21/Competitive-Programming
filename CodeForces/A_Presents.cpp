#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a; cin >> n;
    vector <int> v(n);
    vector <int> ans(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        a = v[i]; 
        ans[a] = i;
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}