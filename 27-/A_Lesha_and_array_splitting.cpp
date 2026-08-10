#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n + 1);
    ll cnt0 = 0;
    for(ll i = 1 ; i <= n ; i++){
        cin>>arr[i];
        // if(arr[i] == 0) cnt0++;
    }
    // if(cnt0 == n){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    vector<pair<ll , ll>>vp;
    ll j = 1 , sum = 0;
    for(ll i = 1 ; i <= n ; i++){
        sum += arr[i];
        if(sum == 0 && arr[i] != 0){
            vp.push_back({j , i - 1});
            sum = arr[i];
            j = i;
        }
    }
    if(sum == 0){
        cout<<"NO"<<endl;
    }
    else{
        vp.push_back({j , n});
        cout<<"YES"<<endl;
        cout<<vp.size()<<endl;
        for(auto it : vp){
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}