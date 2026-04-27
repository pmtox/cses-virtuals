#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll a , b;
    cin>>a>>b;
    ll sum = a + b;
    if(sum % 3 == 0 && max(a , b) <= 2 * min(a , b)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}