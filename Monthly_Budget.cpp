#include <iostream>
using namespace std;

void solve(){
    int limit, daily; cin >> limit >> daily;
    int monthly = daily * 30;
    if(limit >= monthly){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
}