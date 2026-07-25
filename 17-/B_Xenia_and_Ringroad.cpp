#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , m ; cin>>n>>m;
    ll curr = 1 , ans = 0;
    for(int i = 0 ; i < m ; i++){
        ll a;cin>>a;
        ll dist = a - curr;
        if(dist < 0)dist += n;
        ans += dist;
        curr = a;
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}