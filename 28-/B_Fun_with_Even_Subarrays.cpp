#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll isok = true;
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(i > 0){
            if(arr[i] != arr[0]){
                isok = false;
            }
        }
    }
    if(isok){
        cout<<0<<endl;
        return;
    }
    else{
        ll cnt = 0 , val = arr[n - 1] , i = n - 1;
        while(i >= 0){
            if(arr[i] != val){
                cnt++;
                i = n - 2 * (n - (i + 1)) - 1;
            }
            else i--;
        }
        cout<<cnt<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}