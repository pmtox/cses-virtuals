#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , m;
vector<string>grid;
vector<vector<bool>>vis;
vector<ll>dir1 = {-1 , 1 , 0 , 0};
vector<ll>dir2 = {0 , 0 , -1 , 1};
bool isValid(ll r , ll c){
    if(r < 0 || r >= n || c >= m || c < 0){
        return false;
    }
    if(grid[r][c] == '#' || vis[r][c]){
        return false;
    }
    return true;
}
void dfs(ll r , ll c){
    vis[r][c] = true;
    for(ll i = 0 ; i < 4 ; i++){
        ll nr = r + dir1[i];
        ll nc = c + dir2[i];
        if(isValid(nr , nc)){
            dfs(nr , nc);
        }
    }
}
void solve(){
    cin>>n>>m;
    grid.resize(n);
    vis.assign(n , vector<bool>(m , false));
    for(ll i = 0 ; i < n ; i++){
        cin>>grid[i];
    }
    ll rooms = 0;
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            if(grid[i][j] == '.' && !vis[i][j]){
                dfs(i , j);
                rooms++;
            }
        }
    }
    cout<<rooms<<endl;
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    solve();
    return 0;
}