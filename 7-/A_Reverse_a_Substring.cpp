#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    bool flag = 0;
    for(int i = 0 ; i < n-1 ; i++){
        // acab -> abacaba
        
        if(s[i] > s[i+1]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            break;
            flag = 1;
        }
    }
    if(flag == 0){
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    solve();
    return 0;
}