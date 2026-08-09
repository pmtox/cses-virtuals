#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll MOD = 998244353;
ll cntPar(string &s , ll k){
    ll fx = -1; // value
    // max char 
      char fv = '?';
    for(ll i = k ; i < (ll)s.size() ; i+=2){
        if(s[i] == '?'){
            continue;
        }
        if(fx == -1){
            fx = i;
            fv = s[i];
            // cout<<fx<<" : "<<fv<<endl
            continue;
        }
            ll dis = (i - fx) / 2;
            // cout<<dis;
            char expected_val;
            if(dis % 2 == 0){
                expected_val = fv;
            }
            else{
                expected_val = (fv == '0' ? '1' : '0');
            }
            if(s[i] != expected_val){
                return 0;
            }
        }
    if(fx == -1){
        return 2;
    }
    return 1;
}
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    ll odd = cntPar(s , 0);
    // for odd counting;
    ll eve = cntPar(s , 1);
    // from 1 -> onwards;
    cout<<(eve * odd) % MOD<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}