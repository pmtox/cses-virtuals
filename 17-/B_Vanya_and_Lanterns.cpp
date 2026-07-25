#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
void solve(){
    ll n , m ;cin>>n>>m;
    vector<ll>a(n);
    for(ll i = 0 ; i < n ; i++)cin>>a[i];
    sort(a.begin() , a.end());
    double ans = 0;
    ans = max(ans , (double)a[0]);
    for(int i = 1 ; i < n ; i++){
        ans = max(ans , (a[i] - a[i - 1]) / 2.0);
    }
    ans = max(ans , (double)(m- a[n - 1]));
    cout<< fixed <<setprecision(10)<<ans<<endl;
}
int32_t main(){
    solve();
    return 0;
}