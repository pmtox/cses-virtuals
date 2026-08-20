#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll lcm(ll x , ll y){
    return (x * y) / (__gcd(x , y));
}
ll calSum(ll x , ll y){
    return ((x + y) * (y - x + 1)) / 2;
}
void solve(){
    ll n , x , y;
    cin>>n>>x>>y;
    ll cnt1 = (n / x) - (n / lcm(x , y));
    ll cnt2 = (n / y) - (n / lcm(x , y));
    cout<<calSum(n - cnt1 + 1 , n) - calSum(1LL , cnt2)<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}