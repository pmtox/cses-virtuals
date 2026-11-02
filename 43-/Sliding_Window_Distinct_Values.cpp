#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , k;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    //coordinate compression
    vector<ll>v = arr;
    sort(v.begin() , v.end());
    v.resize(unique(v.begin() , v.end()) - v.begin());
    for(ll &it : arr){
        it = lower_bound(v.begin() , v.end() , it) - v.begin();
    }

    map<ll , ll>freq;
    ll nonZeroes = 0;
    auto insert = [&](ll i){
        if(++freq[arr[i]] == 1){
            nonZeroes++;
        }
    };
    auto erase = [&](ll i){
        if(--freq[arr[i]] == 0){
            nonZeroes--;
        }
    };
    for(ll i = 0 ; i < k ; i++){
        insert(i);
    }
    cout<<nonZeroes;
    for(ll i = k ; i < n ; i++){
        insert(i);
        erase(i - k);
        cout<<" "<<nonZeroes;
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}