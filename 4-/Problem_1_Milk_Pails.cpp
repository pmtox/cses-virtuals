// 119
#include<iostream>
#include<fstream>
#include <cstdint>
typedef long long ll;
#define for(i , n) for(ll i = 0 ; i <= n ; i++) 
#define f(i , n) for(ll i = 0 ; i < n ; i++) 
void solve(){
    std::ifstream inputF("input.txt");
    std::ofstream outputF("output.txt");
    ll x , y , m;
    std::cin>>x>>y>>m;
    ll ans = 0;
    for(i , m / x){
        int k = m - x * i;
        ll j = k / y;
        ans = std::max(ans , x * i + y * j);
    }
    std::cout<<ans<<std::endl;
}
int32_t main(){
    solve();
    return 0;
}