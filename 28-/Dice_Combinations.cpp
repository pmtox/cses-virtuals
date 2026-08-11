#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll mod = 1e9 + 7;

//BOTTOM UP DP !! 
ll dp1(ll n){
    vector<ll>dp(n + 1 , 0);
    dp[0] = 1;
    for(ll i = 1 ; i <= n ; i++){
        for(ll j = 1 ; j <= 6 ; j++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    return dp[n];
}

// TOP DOWN DP !! 
ll dfs(ll n , vector<ll>dp){
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(dp[n] != -1){
        return dp[n];
    }
    ll cnt = 0;
    for(ll i = 1 ; i <= 6 ; i++){
        if(n - i >= 0){
            cnt = (cnt + dfs(n - i , dp)) % mod;
        }
    }
    dp[n] = cnt;
    return cnt;
}
void solve(){
    ll n;cin>>n;
    // vector<ll>dp(n + 1 , -1);
    // ll ans = dfs(n , dp);
    ll ans2 = dp1(n);
    // cout<<ans<<endl;
    cout<<ans2<<endl;
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}