#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll a , b , c;
    cin>>a>>b>>c;
    vector<ll>arr = {a , b , c};
    sort(arr.begin() , arr.end());
    if((arr[0] + arr[1]) >= arr[2]){
        cout<<arr[2] - arr[0]<<endl;
    }
    else{
        cout<<arr[1]<<endl;
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