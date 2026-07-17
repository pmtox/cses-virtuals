#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n , k , a , b;cin>>n>>k>>a>>b;
    vector<ll> an(n + 1) , bn(n + 1);
    for(ll i = 1 ; i <= n ; i++){
        cin>>an[i];
        cin>>bn[i];
    }
    ll ans = llabs(an[a] - an[b]) + llabs(bn[a] - bn[b]);
    ll miniA = 1e17 , miniB = 1e17;
    for(ll i = 1 ; i <= k ; i++){
        miniA = min(miniA , llabs(an[a] - an[i]) + llabs(bn[a] - bn[i]));
        miniB = min(miniB , llabs(an[b] - an[i]) + llabs(bn[b] - bn[i]));
    }
    ans = min(miniA + miniB , ans);
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