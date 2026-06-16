#include<bits/stdc++.h>
using namespace std;
#define int long long
bool checkPrime(int a){
    if(a <= 1) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for(int i = 3 ; i * i < a ; i+=2){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
int getR(int a){
    while(a % 2 == 0){
        a /= 2;
    }
    return a;
}
void solve(){
    int a , b;
    cin>>a>>b;
    int cp_a = a;
    int cp_b = b;
    cp_a = getR(cp_a);
    cp_b = getR(cp_b);
    if(cp_a != cp_b){
        cout<<-1<<endl;
        return ;
    }
    else{
        a /= cp_a;
        b /= cp_b;
        a = log2(a);
        b = log2(b);

        int ans = ceil(abs(a - b) / 3.0);
        cout<<ans<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}