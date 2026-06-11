#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int a , b , c;
    cin>>a>>b>>c;
    if(a == b){
        cout<<0<<endl;
    }
    else if(__gcd(a , c) == __gcd(b , c)){
        cout<<1<<endl;
    }
    else if(__gcd(a , c+1) == __gcd(b , c+1)){
        cout<<2<<endl;
    }
    else{
        cout<<3<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}   