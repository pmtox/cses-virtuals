#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
ll n , q;
vector<ll>arr1;
void solve(){
    cin>>n>>q;
    arr1.resize(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    while(q--){
        ll x;cin>>x;
        ll idx = find(arr1.begin() , arr1.end() , x)- arr1.begin();
        cout<<idx + 1<<" ";
        rotate(arr1.begin() , arr1.begin() + idx , arr1.begin() + idx + 1);
    }
    cout<<endl;
}
int32_t main(){
    solve();
    return 0;
}