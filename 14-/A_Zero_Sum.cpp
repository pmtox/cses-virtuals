#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    ll sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    if((sum % 4 == 0) && n % 2 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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