#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(ll n){
    ll res = 1 , base = 2 , mod = 1e9+7;
    while(n > 0){
        if(n % 2 == 1){
            res = (res * base) % mod;
        }
        base = (base * base) % mod;
        n /= 2;
    }
    cout<<res<<endl;
}
int main(){
    ll n;cin>>n;
    solve(n);
    return 0;
}