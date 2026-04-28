#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 676767677;
void solve(){
    ll n;cin>>n;
    vector<ll> arr(n);
    ll lst = -1;
    ll ans = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] > 1){
            ans+=arr[i];
            lst = i;
        }
    }
    if(lst == -1){
        cout<<1<<endl;
        return ;
    }
    bool ones = false;
    for(int i = lst + 1; i < n ; i++){
        if(arr[i] == 1){
            ones = true;
            break;
        }

    }
    if(ones){
        ans+=1;
    }

    cout<<ans % mod<<endl;
}
int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}