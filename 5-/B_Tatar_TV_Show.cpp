#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , k;cin>>n>>k;
    string s;cin>>s;
    for(int i = 0 ; i < k ; i++){
        int cnt1 = 0;
        for(int j = i ; j < n ; j += k){
            if(s[j] == '1'){
                cnt1++;
            }
        }
        if(cnt1 % 2 == 1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

    
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;


}