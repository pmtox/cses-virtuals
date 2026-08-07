#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
vector<ll> bfsGen(vector<vector<ll>>& adj , ll n , ll m){
    vector<ll>bfs;
    vector<ll>vis(n , 0);
    vis[0] = 1;
    queue<ll>q;
    q.push(0);
    while(!q.empty()){
        ll node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}
void solve(){
    ll n , m;cin>>n>>m;
    vector<vector<ll>>adj(n);
    for(ll i = 0 ; i < m ; i++){
        ll u , v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); // if undirected
    }
    vector<ll>bfsCons = bfsGen(adj , n , m);
    for(ll it : bfsCons){
        cout<<it<<" ";
    }
    cout<<endl;
}
int32_t main(){
    solve();
    return 0;
}