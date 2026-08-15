#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , m , x;
vector<string>grid;
vector<vector<bool>>vis;
vector<ll>dir1 = {-1 , 1 , 0 , 0};
vector<ll>dir2 = {0 , 0 , -1 , 1};
bool isVis(ll l , ll r){
    if(l < 0 || r < 0 || l >= n || r >= m){
        return false;
    }
    if(grid[l][r] == '#' || vis[l][r]){
        return false;
    }
    return true;
}
void dfs(ll l , ll r){
    vis[l][r] = true;
    for(ll i = 0 ; i < 4 ; i++){
        ll nl = l + dir1[i];
        ll nr = r + dir2[i];
        if(isVis(nl , nr)){
            dfs(nl , nr);
        }
    }
    if(x > 0){
        grid[l][r] = 'X';
        x--;
    }
}
void solve(){
    cin>>n>>m>>x;
    grid.resize(n);
    vis.assign(n , vector<bool>(m , false));
    ll rig = -1 , lef = -1;
    for(ll i = 0 ; i < n ; i++){
        cin>>grid[i];
        for(ll j = 0 ; j < m ; j++){
            if(grid[i][j] == '.' && rig == -1){
                rig = i;
                lef = j;
            }
        }
    }
    if(rig != -1){
        dfs(rig , lef);
    }
    for(ll i = 0 ; i < n ; i++){
        cout<<grid[i]<<endl;
    }
}
int32_t main(){
    IOS;
    solve();
    return 0;
}