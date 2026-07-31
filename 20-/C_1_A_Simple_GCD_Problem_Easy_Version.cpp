#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
int lcm(int a, int b) {
    return (a == 0 || b == 0) ? 0 : (a / __gcd(a, b) * b);
}
void solve(){
    int n;cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    for(int i = 0 ; i < n ; i++) cin>>b[i];
    ll maxi = int(a[0] != __gcd(a[0] , a[1])) + int(a[n - 1] != __gcd(a[n - 1] , a[n - 2]));
    for(int i = 1 ; i < n - 1 ; i++){
        if(a[i] != lcm(__gcd(a[i] , a[i - 1]) , __gcd(a[i] , a[i + 1]))){
            maxi++;
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