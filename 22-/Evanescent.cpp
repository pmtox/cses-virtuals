#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    ll cnt = 0;
    for(ll i = 1 ; i < n ; i++){
        if(s[i] != s[i - 1]){
            cnt++;
        }
    }
    ll mini = LLONG_MAX;
    for(ll i = 1 ; i < n - 1 ; i++){
        ll bef = (s[i - 1] != s[i]) + (s[i] != s[i + 1]);
        ll aft = (s[i - 1] != s[i + 1]);
        mini = min(mini , cnt - bef + aft);
    }
    cout<<mini + 1<<endl;
}
int32_t main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}