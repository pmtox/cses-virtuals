#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    ll ans = 0;
    string s;cin>>s;
    for(ll i = 0 ; i < n ; i++){
        if(s[i] == '0' || s[i] == '2'){
            ll cost = i + 1;
            for(ll j = i ; j < n ; j += cost){
                if(s[j] == '0'){
                    s[j] = '2';
                    ans += cost;
                }
                else if(s[j] != '2'){
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}