#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr)
void solve(){
    ll n , a , b , c;
    cin>>n>>a>>b>>c;
    vector<ll>dp(n + 1 , -1e9);
    dp[0] = 0;
    for(ll i  = 1 ; i <= n ; i++){
        if(i >= a){
            dp[i] = max(dp[i] , dp[i - a] + 1);
        }
        if(i >= b){
            dp[i] = max(dp[i] , dp[i - b] + 1);
        }
        if(i >= c){
            dp[i] = max(dp[i] , dp[i - c] + 1);
        }
    }
    cout<<dp[n]<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}