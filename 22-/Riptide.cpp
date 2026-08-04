#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll a, b , c;cin>>a>>b>>c;
    if(a == b || b == c || c == a){
        cout<<0<<endl;
        return;
    }
    else{
        vector<ll>arr = {a , b ,c};
        sort(arr.begin() , arr.end());
        cout<<min(arr[1] - arr[0] , arr[2] - arr[1])<<endl;
    }
}
int32_t main(){
    IOS;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}