#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , m ;cin>>n>>m;
    vector<vector<int>>vp;
    for(int i = 0 ; i < n ; i++){
        int k , l;cin>>k>>l;
        vp[k].push_back(l);
        vp[l].push_back(k);
    }
}
int32_t main(){
    solve();
    return 0;
}