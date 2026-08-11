#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , m , k;
    cin>>n>>m>>k;
    vector<ll>arr(n) , arr2(m);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(ll i = 0 ; i < m ; i++){
        cin>>arr2[i];
    }
    sort(arr.begin() , arr.end());
    sort(arr2.begin() , arr2.end());
    ll ans = 0;
    ll i = 0 , j = 0;
    while(i < n && j < m){
        if(arr2[j] < arr[i] - k){
            j++;
        }
        else if(arr2[j] > arr[i] + k){
            i++;
        }
        else{
            ans++;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}