#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll>a(k);
    for(ll i = 0 ; i < k ; i++){
        cin>>a[i];
    }
    sort(a.begin() , a.end());
vector<ll>gaps;
    for(int i = 0 ; i < k - 1 ; i++){
        gaps.push_back(a[i + 1] - a[i] - 1);
    }
    gaps.push_back(a[0] + n - a[k - 1] - 1);
    sort(gaps.rbegin() , gaps.rend());
    ll saved = 0 , days = 0;
    for(auto it : gaps){
        ll cur = it - days * 2;
        if(cur > 0){
            saved++;
            cur -= 2;
            if(cur > 0){
                saved += cur;
            }
            days += 2;
        }
    }
    cout<<(n - saved)<<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
 