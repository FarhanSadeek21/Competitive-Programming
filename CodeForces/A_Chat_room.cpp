#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack <char> st;
    string b = "hello";
    reverse(b.begin(), b.end());
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        char c = st.top(); cout << c << endl;
        
        st.pop();
    }
    return 0;
}