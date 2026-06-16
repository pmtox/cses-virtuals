#include<bits/stdc++.h>
using namespace std;
#define int long long
bool checkk(int a){
    if(a % 2520 == 0){
        return true;
    }
    int cp_a = a;
    while(a > 0){
        int d = a % 10;
        if(d){
            if(cp_a % d != 0){
                return false;
            }
        }
        a /= 10;
    }
    return true;
}
void solve(){
    int n;cin>>n;
    int limm = 2520 * ((n + 2520 - 1) / 2520); // LCM(1 , 10) == 2520
    for(int i = n ; i <= limm ; i++){
        if(checkk(i)){
            cout<<i<<endl;
            break;
        }
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}