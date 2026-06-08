#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    int cntEv = 0 , cntOd = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i] == 1) arr[i]++;
    }
    for(int i = 1 ; i < n ; i+=2){
        if(arr[i] % arr[i - 1] == 0){
            arr[i]++;
        }
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}