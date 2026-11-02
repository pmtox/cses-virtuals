#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , k;cin>>n>>k;
    vector<ll>arr(n);
    ll a , b , c;
    cin>>arr[0]>>a>>b>>c;
    for(ll i = 1 ; i < n ; i++){
        arr[i] = (1LL * a * arr[i - 1] + b) % c;
    }
    ll sum = 0;
    for(ll i = 0 ; i < k ; i++){
        sum ^= arr[i];
    }
    ll ans = sum;
    for(ll i = k ; i < n ; i++){
        sum ^= arr[i] ^ arr[i - k];
        ans ^= sum;
    }
    cout<<ans<<endl;
}
void solve2(){
    ll n , k;cin>>n>>k;
    vector<ll>arr(n);
    ll a , b , c;
    cin>>arr[0]>>a>>b>>c;
    for(ll i = 1 ; i < n ; i++){
        arr[i] = (1LL * a * arr[i - 1] + b) % c;
    }
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++){
        ll d = min(i , n - 1 - i);
        if(d < k){
            if(d % 2 == 0) ans ^= arr[i];
        }
        else{
            if(k % 2 == 1) ans ^= arr[i];
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    solve2();
    return 0;
}