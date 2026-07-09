#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    vector<pair<int , int>>vp;  // don't allocate when doing push_back
    // ends up taking 2n size;! LOL
    for(int i = 0 ; i < n ; i++){
        int x ; cin>>x;
        vp.push_back({x , i});
    }
    sort(vp.begin() , vp.end());
    vector<int>pre(n , 0);
    pre[0] = vp[0].first;
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1] + vp[i].first;
    }
    vector<int>ans(n);
    for(int i = 0 ; i < n ; i++){
        int j = i;
        int found = i;
        while(j < n){
            pair<int , int> prr = {pre[j] + 1 , INT_MIN};
            int idx = lower_bound(vp.begin() , vp.end() , prr) - vp.begin();
            // subtracted coz we took 1 extra index in tmp pair;
            idx--;
            if(idx == j){
                break;
            }
            found += idx - j;
            j = idx;
        }
        ans[vp[i].second] = found;
    }
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}