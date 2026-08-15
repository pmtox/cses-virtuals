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
    if(l < 0 || r < 0 || l >= n || r >= m){
        return false;
    }
    if(grid[l][r] == '#' || vis[l][r]){
        return false;
    }
    return true;
}
void dfs(ll l , ll r , ll &sheeps , ll &wolves , bool &canEscape){
    vis[l][r] = true;
    if(grid[l][r] == 'k') sheeps++;
    if(grid[l][r] == 'v') wolves++;
    if(l == 0 || r == 0 || l == n - 1 || r == m - 1){
        canEscape = true;
    }
    for(ll i = 0 ; i < 4 ; i++){
        ll nl = l + dir1[i];
        ll nr = r + dir2[i];
        if(isValid(nl , nr)){
            dfs(nl , nr , sheeps , wolves , canEscape);
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
    ll noSheeps = 0;
    ll noWolves = 0;
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            if(grid[i][j] != '#' && (!vis[i][j])){
                ll sheeps = 0;
                ll wolves = 0;
                bool canEscape = false;
                dfs(i , j , sheeps , wolves , canEscape);
                if(canEscape){
                    noSheeps += sheeps;
                    noWolves += wolves;
                }
                else{
                    if(sheeps > wolves){
                        noSheeps += sheeps;
                    }
                    else{
                        noWolves += wolves;
                    }
                }
            }
        }
    }
    cout<<noSheeps<<" "<<noWolves<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}