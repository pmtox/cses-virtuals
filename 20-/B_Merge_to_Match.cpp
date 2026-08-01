#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
void solve(){
    ll n , m;
    cin>>n>>m;
    vector<ll>arr1(n) , arr2(m);
    for(int i = 0 ; i < n ; i++) cin>>arr1[i];
    for(int i = 0 ; i < m ; i++) cin>>arr2[i];
    sort(arr1.begin() , arr1.end());
    sort(arr2.begin() , arr2.end());
    if(n < 2 * m){
        cout<<"NO"<<endl;
        return;
    }
    ll i = 0;
    while( i < m && arr1[i] < arr2[i] && arr2[i] < arr1[n - m + i]){
        i++;
    }
    cout<< (i < m ? "NO" : "YES") <<endl;
}
int32_t main(){
    IOS;
    ll t;cin>>t;
    while(t--) solve();
    return 0;
}