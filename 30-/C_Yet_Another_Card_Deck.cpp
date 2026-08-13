#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , m;
vector<ll>a , b;
void sww(ll x){
    ll tem = a[x];
    for(ll j = x ; j > 0 ; j--){
        a[j] = a[j - 1];
    }
    a[0] = tem;
}
void solve(){
    cin>>n>>m;
    a.resize(n);
    b.resize(m);
    for(ll i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(ll i = 0 ; i < m ; i++){
        cin>>b[i];
    }
    ll i = 0;
    vector<ll>ans;
    while(i < m){
        bool isok = false;
        for(ll x = 0 ; x < n ; x++){
            if(a[x] == b[i]){
                ans.push_back(x + 1);
                sww(x);
                i++;
                isok = true;
                break;
            }
        }
        if(!isok){
            break;
        }
    }
    for(ll it : ans){   
        cout<<it<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}