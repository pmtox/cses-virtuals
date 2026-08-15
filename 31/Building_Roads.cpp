#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , m;
vector<vector<ll>>adj;
vector<bool>vis;
void dfs(ll k){
    vis[k] = true;
    for(ll it : adj[k]){
        if(!vis[it]){
            dfs(it);
        }
    }
}
void solve(){
    cin>>n>>m;
    adj.resize(n + 1);
    vis.resize(n + 1 , false);
    for(ll i = 0 ; i < m ; i++){
        ll u , v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll>leaders;
    for(ll i = 1 ; i <= n ; i++){
        if(!vis[i]){
            leaders.push_back(i);
            dfs(i);
        }
    }
    ll k = leaders.size() - 1;
    cout<<k<<endl;
    for(ll i = 0 ; i < k ; i++){
        cout<<leaders[i] <<" "<<leaders[i + 1]<<endl;
    }
}
int32_t main(){
    IOS;
    solve();
    return 0;
}