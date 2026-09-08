#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n ; cin>>n;
    vector<ll>arr(n);
    ll eass = 0;
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] == 0) eass++;
    }
    if(arr[0] == 0 && arr[n - 1] == 0){
        cout<<0<<endl;
    }
    else if(arr[0] == 1 && arr[n - 1] == 1){
        if(eass >= 2){
            cout<<2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        if(eass >= 2){
            cout<<1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
int32_t main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}