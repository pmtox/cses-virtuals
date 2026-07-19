#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll maxi = 0;
    sort(arr.begin() , arr.end());
    vector<ll>pref(n , 0);
    pref[0] = arr[0];
    for(int i = 1 ; i < n ; i++){
        pref[i] = pref[i - 1] + arr[i];
    }
    for(int i = 0 ; i <= k ; i++){
        ll sec = k - i;
        ll lef = 2 * i;
        ll rig = n - sec - 1;
        ll sum = pref[rig] - (lef == 0 ? 0 : pref[lef - 1]);
        maxi = max(maxi , sum);
    }
    cout<<maxi<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}