#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , m;
vector<string>grid;
const vector<char> DIRECTIONS = {'U' , 'R' , 'D' , 'L'};
const vector<ll>dir1 = {-1 , 0 , 1 , 0};
const vector<ll>dir2 = {0 , 1 , 0 , -1};
void solve(){
    cin>>n>>m;
    grid.resize(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>grid[i];
    }
    pair<ll , ll>start;
    pair<ll , ll>end;
    vector<vector<bool>> vis(n , vector<bool>(m , false));
    vector<vector<char>> prev(n , vector<char>(m , 0));
    for(ll i = 0 ; i < n ; i++){
        for(ll j = 0 ; j < m ; j++){
            if(grid[i][j] == 'A'){
                start = {i , j};
            }
            else if(grid[i][j] == 'B'){
                end = {i , j};
            }
        }
    }
    queue<pair<ll , ll>>q;
    vis[start.first][start.second] = true;
    q.push(start);
    bool found = false;
    while(!q.empty() && !found){
        pair<ll , ll>curr = q.front();
        ll row = curr.first;
        ll col = curr.second;
        q.pop();
        
        for(ll i = 0 ; i < 4 ; i++){
            ll newL = row + dir1[i];
            ll newR = col + dir2[i];
            if(newL >= 0 && newL < n && newR >= 0 && newR < m 
            && !vis[newL][newR] && grid[newL][newR] != '#'){
                vis[newL][newR] = true;
                prev[newL][newR] = DIRECTIONS[i];
                q.push({newL , newR});
                
                if(make_pair(newL , newR) == end){
                    found = true;
                    break;
                }
            }
        }
    }
    if(!vis[end.first][end.second]){
        cout<<"NO"<<endl;
        return ;
    }
    string path;
    pair<ll , ll> curr = end;
    while(curr != start){
        char dir = prev[curr.first][curr.second];
        path.push_back(dir);
        ll idx = find(DIRECTIONS.begin() , DIRECTIONS.end() , dir) - DIRECTIONS.begin();
        curr.first -= dir1[idx];
        curr.second -= dir2[idx];
    }
    reverse(path.begin() , path.end());
    cout<<"YES"<<endl;
    cout<<path.size()<<endl;
    cout<<path<<endl;
}
int32_t main(){
    solve();
    return 0;
}