#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
bool isok(const vector<ll>&arr , ll k , ll p){
    ll back = INT_MIN;
    ll ans = 0;
    for(ll it : arr){
        ll cur = it;
        if(back != INT_MIN){
            cur = max(cur , back + 1);
        }
        if(cur - it > p){
            return false;
        }
        ans += cur - it;
        if(ans > p * k){
            return false;
        }
        back = cur;
    }
    return true;
}
void solve(){
    ll n , k;
    cin>>n>>k;
    vector<ll>arr(n);
    ll cnt = 0;
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    // for(ll i = 1 ; i < n ; i++){
    //     // if(arr[i] == arr[i - 1]){
    //     //     cnt++;
    //     // }
    // }
    sort(arr.begin() , arr.end() , [](ll a , ll b){
        return a < b;
    });
    ll l = 0 , r = 1LL * n * (n - 1) / 2;
    while(l < r){
        ll mid = l + (r - l) / 2;
        if(isok(arr , k , mid)){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    cout<<l<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}