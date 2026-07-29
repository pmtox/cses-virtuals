#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
bool iss(ll k , ll x , ll y , ll p){
    auto val = [&](ll i){
        return (x + i) * (y + k - i);
    };
    ll u = y + k - x;
    ll i1 = u / 2;
    ll i2 = (u + 1) / 2;
    i1 = max(0LL , min(k , i1));
    i2 = max(0LL , min(k , i2));
    return max(val(i1) , val(i2)) >= p;
}
void solve(){
    ll x , y , p;
    cin>>x>>y>>p;
    if(x * y >= p){
        cout<<0<<endl;
        return ;
    }
    ll l = 0 , r = p , ans = p;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(iss(mid , x , y , p)){
            ans = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}