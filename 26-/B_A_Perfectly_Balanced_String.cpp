#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    string s;cin>>s;
    // a
    // ab
    // aba
    // ba
    ll n = s.size();
    set<char>st;
    st.insert(s.begin() , s.end());
    ll n2 = st.size();
    bool isok = true;
    for(int i = 0 ; i < n - n2 ; i++){
        if(s[i] != s[i + n2]){
            isok = false;
            break;
        }
    }
    // WE are checking for cyclic order here.
    // if abc exist at some index then it should occur again after that index again
    // abcabcabc
    // abc == abc == abc;
    if(isok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}