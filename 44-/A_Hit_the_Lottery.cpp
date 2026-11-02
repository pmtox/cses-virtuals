#include<bits/stdc++.h>
using namespace std;
#define  ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// ll dp(ll n){
//     ll ans = 0;
//     if(n == 0) return ans;
//     ans += dp(n / 100);
//     n = n % 100;
//     ans += dp(n / 20);
//     n = n % 20;
//     ans += dp(n / 10);
//     n = n % 10;
//     ans += dp(n / 5);
//     n = n % 5;
//     ans += n;

//     return ans;
// }
void solve(){
    ll n;cin>>n;
    // 125 -> 100 + 20 + 5
    // 43 -> 20 + 20 + 1 + 1 + 1
    ll ans = 0;
    
    ans += n / 100;
    n %= 100;
    ans += n / 20;
    n %= 20;
    ans += n / 10;
    n %= 10;
    ans += n / 5;
    n %= 5;
    ans += n;
    // while(n > 0){
    //     ll d = n / 100;
    //     ll r = n % 100;
    //     ans += d;
    // }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}