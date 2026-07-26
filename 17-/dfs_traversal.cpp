#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);

// calling the depth first search
void dfs(vector<vector<ll>>&adj_ls , ll node , vector<bool>&vis , vector<ll>&ans){
    vis[node] = 1;
    ans.push_back(node);
    for(auto it : adj_ls[node]){
        if(!vis[it]){
            dfs(adj_ls , it , vis , ans);
        }
    }
}

// creating the adjency list;
vector<vector<ll>> create_gph(ll m , ll n){
    vector<vector<ll>>ans(n);
    for(int i = 0 ; i < m ; i++){
        ll u , v ; cin>>u>>v;
        ans[u].push_back(v);
        ans[v].push_back(u); // for undirected graph
    }
    return ans;
}
void adj(){
    ll n , m;cin>>n>>m;
    vector<vector<ll>>adj_ls = create_gph(m , n); 
    vector<bool>vis(n , 0);
    ll start = 0;
    vector<ll>ans;
    dfs(adj_ls , start , vis , ans);
    for(ll it : ans){
        cout<<it<<" ";
    }
    cout<<endl;
}
int32_t main(){
    adj();
    return 0;
}