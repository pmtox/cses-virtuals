#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
vector<ll>arr;
void solve(){
    ll n;cin>>n;
    arr.resize(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll maxi = INT_MIN;
    ll sum = 0;
    for(ll i = 0 ; i < n ; i++){
        sum += arr[i];
        maxi = max(maxi , sum);
        if(sum < 0){
            sum = 0;
        }
    }
    cout<<maxi<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}