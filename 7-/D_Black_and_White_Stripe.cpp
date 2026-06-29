#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int ans = INT_MAX;
    vector<int>pre(n + 1 , 0);
    for(int i = 0 ; i < n ; i++){
        pre[i+1] = pre[i] + (s[i] == 'W');
    }
    for(int i = 0 ; i <= n - k ; i++){
        int diff = pre[i + k] - pre[i];
        ans = min(ans , diff);
    }
    cout<<ans<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}