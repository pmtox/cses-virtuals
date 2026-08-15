#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , m;
vector<string>grid; 
vector<vector<bool>>vis;
vector<ll>dir1 = {-1 , 1 , 0 , 0};
vector<ll>dir2 = {0 , 0 , -1 , 1};
bool isValid(ll l , ll r){
    if(l < 0 || r >= m || l >= n || r < 0){
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
        if(isValid(nl , nr)){
            dfs(nl , nr);
        }
    }
}
void solve(){
    cin>>n>>m;
    grid.resize(n);
    vis.assign(n , vector<bool>(m , false));
    for(ll i = 0 ; i < m ; i++){
        cin>>grid[i];
    }
    ll rooms = 0;
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            if(grid[i][j] == '.' && (!vis[i][j])){
                dfs(i , j);
                rooms++;

            }
        }
    }
    cout<<rooms<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}