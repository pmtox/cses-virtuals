#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n;
vector<vector<ll>>adj;
vector<ll>sub;
void dfs(ll j){
    sub[j] = 0;
    for(ll it : adj[j]){
        dfs(it);
        sub[j] += sub[it] + 1;
    }
}
void solve(){
    cin>>n;
    adj.resize(n + 1);
    sub.assign(n + 1 , 0);
    for(ll i = 2 ; i <= n ; i++){
        ll boss;
        cin>>boss;
        adj[boss].push_back(i);
    }
    dfs(1);
    for(ll i = 1 ; i <= n ; i++){
        cout<<sub[i]<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}