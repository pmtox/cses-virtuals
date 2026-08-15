#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n;
bool ans;
vector<ll>arr;
void solve(){
    cin>>n;
    arr.resize(n);
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(ll i = 1 ; i <= 60 ; i++){
        set<ll>st;
        ll k = 1LL << i;
        for(ll i = 0 ; i < n ; i++){
            st.insert(arr[i] % k);
        }
        if(st.size() == 2){
            ans = k;
            break;
        }
    }   
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}