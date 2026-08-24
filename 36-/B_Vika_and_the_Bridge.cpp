#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    int n, k;
    cin>>n>>k;
    vector<ll>c(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>c[i];
    }
    vector<ll>colors[k + 1];
    for(ll i = 1 ; i <= k ; i++){
        colors[i].push_back(0);
    }
    for(ll i = 0 ; i < n ; i++){
        colors[c[i]].push_back(i + 1);
    }
    for(ll i = 1 ; i <= k ; i++){
        colors[i].push_back(n+1);
    }
    priority_queue<ll>jumps[k + 1];
    ll ans = INT_MAX;
    for(ll i = 1 ; i <= k ; i++){
        for(ll j = 0 ; j < colors[i].size() - 1 ; j++){
            jumps[i].push(colors[i][j + 1] - colors[i][j] - 1);
        }
        ll maxi = jumps[i].top();
        jumps[i].pop();
        if(maxi & 1){
            jumps[i].push(maxi / 2);
            jumps[i].push(maxi / 2);
        }
        else{
            jumps[i].push(maxi / 2);
            jumps[i].push((maxi / 2) - 1);
        }
        ans = min(ans , jumps[i].top());
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