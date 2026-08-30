#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if(n <= 3){
        cout<<-1<<endl;
        return ;
    }
    ll i = 0 , j = n - 1;
    ll mini = 1 , maxi = n;
    bool isok = false;
    while(i < j){
        if(arr[i] == maxi){
            i++;
            maxi--;
        }
        if(arr[i] == mini){
            i++;
            mini++;
        }
        if(arr[j] == maxi){
            j--;
            maxi--;
        }
        if(arr[j] == mini){
            j--;
            mini++;
        }
        if(arr[i] != maxi && arr[i] != mini && arr[j] != maxi && arr[j] != mini){
            cout<<i + 1<<" "<<j + 1<<endl;
            return ;
        }
    }
    cout<<-1<<endl;
    return;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}