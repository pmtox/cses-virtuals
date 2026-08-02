#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
// #define isok(fxn) (fxn ? "YES" : "NO")
void solve(){
    ll n , c;
    cin>>n>>c;
    vector<ll>arr;
    for(int i = 1 ; i <= n ; i++){
        ll x; cin>>x;
        arr.push_back(i + x);
    }
    sort(arr.begin() , arr.end());
    ll ans = 0;
    ll i = 0;
    while(i < n && arr[i] <= c){
        c -= arr[i];
        ans++;
        i++;
    }
    cout<<ans<<endl;
}

//--- Greedy + prefix + binary search ---//
void solve2(){
    ll n , c;
    cin>>n>>c;
    vector<ll>arr , pref(n , 0);
    for(int i = 0 ; i < n ; i++){
        ll x; cin>>x;
        arr.push_back(x + i + 1);
    }
    sort(arr.begin() , arr.end());
    pref[0] = arr[0];
    for(int i = 1 ; i < n ; i++){
        pref[i] = pref[i-1] + arr[i];
    }
    ll ans = upper_bound(pref.begin() , pref.end() , c) - pref.begin();
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){ 
        solve();
        // solve2();
    }
    return 0;
}