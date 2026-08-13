#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n;
vector<ll>a , b , c;
vector<ll>callFor(vector<ll>&arr){
    vector<ll>ans(3);
    vector<pair<ll , ll>>vp;
    for(ll i = 0 ; i < n ; i++){
        vp.push_back({arr[i] , i});
    }
    sort(vp.rbegin() , vp.rend());
    for(ll it = 0 ; it < 3 ; it++){
        ans[it] = vp[it].second;
    }
    return ans;
}
void solve(){
    cin>>n;
    a.resize(n);
    b.resize(n);
    c.resize(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(ll i = 0 ; i < n ; i++){
        cin>>b[i];
    }
    for(ll i = 0 ; i < n ; i++){
        cin>>c[i];
    }
    vector<ll>maxA = callFor(a);
    vector<ll>maxB = callFor(b);
    vector<ll>maxC = callFor(c);
    ll maxi = INT_MIN;
    for(ll i = 0 ; i < 3 ; i++){
        for(ll j = 0 ; j < 3 ; j++){
            for(ll k = 0 ; k < 3 ; k++){
                ll x = maxA[i] , y = maxB[j] , z = maxC[k];
                if((x == y) || (y == z) || (x == z)){
                    continue;
                }
                maxi = max(maxi , a[x] + b[y] + c[z]);
            }
        }
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