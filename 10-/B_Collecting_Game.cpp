#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n ; cin>>n;
    vector<pair<int , int>>vp;
    // {to maintain order we used vector pair}
    for(int i = 0 ; i < n ; i++){
        int x;cin>>x;
        vp.push_back({x , i});
    }
    sort(vp.begin() , vp.end());
    vector<int>pref(n , 0);
    pref[0] = vp[0].first;
    for(int i = 1 ; i < n ; i++){
        pref[i] = pref[i - 1] + vp[i].first; 
    }
    vector<int>ans(n);
    for(int i = 0 ; i < n ; i++){
        int j = i;
        int found = i;
        while(j < n){
            pair<int , int> tmp = {pref[j] + 1 , INT_MIN};
            int idx = lower_bound(vp.begin() , vp.end() , tmp) - vp.begin();
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