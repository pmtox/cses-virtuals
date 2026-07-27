#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if(n % 2){
        cout<<"NO"<<endl;
        return;
    }
    ll maxi = LLONG_MIN , mini = LLONG_MAX;
    for(int i = 0 ; i < n ; i++){
        if(i % 2) maxi = max(maxi , arr[i]);
        else mini = min(mini , arr[i]);
    }
    if((mini - maxi) > 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}