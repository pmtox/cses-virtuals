#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr)
void solve(){
    ll n , k;cin>>n>>k;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    ll cnt = upper_bound(arr.begin() , arr.end() , k) - lower_bound(arr.begin() , arr.end() , k);
    cout<<cnt<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}