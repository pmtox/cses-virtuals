#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n; cin>>n;
    ll k = 0; ll sum = 0;
    for(ll i = 5 ; i <= n ; i*= 5){
        k = n / i;
        sum += k;
    }
    cout<<sum<<endl;
}
int main(){
    solve();
    return 0;
}