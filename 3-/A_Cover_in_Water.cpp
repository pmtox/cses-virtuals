#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cnt0 = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '.'){
            cnt0++;
        }
    }
    bool triplet = false;
    int i = 1;
    while(i < n - 1){
        if(s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.'){
            triplet = true;
            break;
        }
        i++;
    }
    if(triplet){
        cout<<2<<endl;
    }
    else{
        cout<<cnt0<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}