#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , k;cin>>n>>k;
    vector<ll>arr(n);
    ll a , b , c;
    cin>>arr[0]>>a>>b>>c;
    for(ll i = 1 ; i < n ; i++){
        arr[i] = (1LL * a * arr[i - 1] + b) % c;
    }
    deque<ll>q;
    auto push = [&](ll i){
        while(!q.empty() && arr[i] <= arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    };
    for(ll i = 0 ; i < k ; i++){
        push(i);
    }
    ll ans = arr[q.front()];
    for(ll i = k ; i < n ; i++){
        push(i);
        if(q.front() == i - k){
            q.pop_front();
        }
        ans ^= arr[q.front()];
    }
    cout<<ans<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}