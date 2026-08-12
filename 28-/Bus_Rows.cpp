#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , m , k;
    cin>>n>>m>>k;
    ll ans = 0;
    ll prod = n * m;
    ll mini = min((prod - k) , (k - 1));
    ans += mini;
    ll watt = (k + m - 1) / m;
    cout<<min(watt , n - watt + 1)<<endl;
    // cout<<mini<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}