#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n;
void solve(){
    cin>>n;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll ans = 0 , val = 0;
    for(ll i = 0 ; i < n ; i++){
        ll curVar;
        if(i % 2 == 0){
            curVar = -arr[i];
        }
        else{
            curVar = arr[i];
        }
        ans += abs(curVar - val);
        val = curVar;
    }
    ans += abs(val);
    cout<<ans / 2<<endl;
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}