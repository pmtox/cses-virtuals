#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
vector<vector<ll>> gph_create(vector<vector<ll>>&adj_ls , ll m){
    vector<vector<ll>>ans;
    for(ll i = 0 ; i < m ; i++){
        ll u , v;
        cin>>u>>v;
        ans[u].push_back(v);
        // ans[v].push_back(u); -> for undirected
    }
    return ans;
}
void bfsDs(){
    ll n , m;
    cin>>n>>m;
    vector<vector<ll>>adj_ls = gph_create(adj_ls , m);
    vector<bool>vis(n , false);
    vis[0] = true;
    queue<ll>q;
    q.push(0);
    vector<ll>bfs;
    while(!q.empty()){
        ll node = q.front();
        q.pop();
        bfs.push_back(node);
        for(ll it : adj_ls[node]){
            if(!vis[it]){
                vis[it] = true;
                q.push(it);
            }
        }
    }
    for(ll it : bfs){
        cout<<it<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    bfsDs();
    return 0;
}