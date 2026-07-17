#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n , k , a , b;cin>>n>>k>>a>>b;
    vector<ll> an(n + 1) , bn(n + 1);
    for(ll i = 1 ; i <= n ; i++){
        cin>>an[i];
        cin>>bn[i];
    }
    ll ans = llabs(an[a] - an[b]) + llabs(bn[a] - bn[b]);
    ll miniA = 1e17 , miniB = 1e17;
    for(ll i = 1 ; i <= k ; i++){
        miniA = min(miniA , llabs(an[a] - an[i]) + llabs(bn[a] - bn[i]));
        miniB = min(miniB , llabs(an[b] - an[i]) + llabs(bn[b] - bn[i]));
    }
    ans = min(miniA + miniB , ans);
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// 2nd sol
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n , k , a , b;
    cin>>n>>k>>a>>b;
    vector<vector<ll>> v(n , vector<ll>(2));
    for(int i = 0 ; i < n ; i++){
        cin>>v[i][0]>>v[i][1];    
    }
    if(a <= k && b <= k){
        cout<<"0"<<endl;
    }
    else if(a > k && b <= k || b > k && a <= k){
        ll maxi = max(a , b);
        ll lngdist = LLONG_MAX;
        for(ll i = 0 ; i < k ; i++){
            ll disstt = llabs((ll)v[i][0] - (ll)v[maxi - 1][0]) + llabs((ll)v[i][1] - (ll)v[maxi - 1][1]);
            lngdist = min(disstt , lngdist);
        }
        cout<<lngdist<<endl;
    }
    else{
        ll miniA = LLONG_MAX , miniB = LLONG_MAX , 
        disAB = labs((ll)v[a - 1][0] - (ll)v[b - 1][0]) + llabs((ll)v[a - 1][1] - (ll)v[b - 1][1]);
        for(int i = 0 ; i < k ; i++){
            ll disA = llabs((ll)v[i][0] - (ll)v[a - 1][0]) + llabs((ll)v[i][1] - (ll)v[a - 1][1]);
            ll disB = llabs((ll)v[i][0] - (ll)v[b - 1][0]) + llabs((ll)v[i][1] - (ll)v[b - 1][1]); 
            miniA = min(disA , miniA);
            miniB = min(disB , miniB);
        }
        if(k > 0){
            cout<<min(miniA + miniB , disAB)<<endl;
        }
        else{
            cout<<disAB<<endl;
        }
    }
}
int32_t main(){
    IOS;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}