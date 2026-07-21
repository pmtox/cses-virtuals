#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(NULL);
vector<ll>preff(vector<ll>&arr , ll n){
    vector<ll>ans(n , 0);
    ans[0] = arr[0];
    for(int i = 1 ; i < n ; i++){
        ans[i] = ans[i-1] + arr[i];
    }
    return ans;
}
void solve(){
    ll n , q;cin>>n>>q;
    vector<ll>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    vector<ll>pref = preff(arr , n);
    for(int i = 0 ; i < q ; i++){
        ll x , y;
        cin>>x>>y;
        x--;
        y--;
        cout<<pref[y] - (x == 0 ? 0 : pref[x - 1]);
        cout<<endl;
    }
}
int32_t main(){
    IOS;
    solve();
    return 0;
}