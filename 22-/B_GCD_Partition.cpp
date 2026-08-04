#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll ttlsum = accumulate(arr.begin() , arr.end() , 0LL);
    ll sum = 0;
    ll ans = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        sum += arr[i];
        ans = max(ans , __gcd(ttlsum - sum , sum));
    }
    cout<<ans<<endl;
}

// prefix + gcd

int32_t main(){
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}