#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie();
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    int k = n / 2;
    for(int it = 0 ; it < k ; it++){
        if(s[it] == 'R' && s[it + k] == 'L'){
            cout<<it + k + 1<<" "<<it + 1<<endl;
        }
        else{
            cout<<it + 1<<" "<<it + k + 1<<endl;
        }
    }
}
int32_t main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    solve();
    return 0;
}