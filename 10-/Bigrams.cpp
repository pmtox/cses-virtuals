#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
#define int long long int
void solve(){
    int n ; cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int cnt = 0;
    bool isok = false;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= 2){
            cnt++;
        }
        if(arr[i] >= 3){
            isok = true;
        }
    }
    if(cnt >= 2 || isok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    IOS;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}