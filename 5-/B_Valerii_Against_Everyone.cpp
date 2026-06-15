#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin() , arr.end());
    // vector<int>bitt;
    // for(int i = 0 ; i < n ; i++){
    //     bitt.push_back(1 << arr[i]);
    // }
    // sort(bitt.begin() , bitt.end());
    bool isok = false;
    for(int i = 1 ; i < n ; i++){
        if(arr[i] == arr[i - 1]){
            isok = true;
            break;
        }
    }
    if(isok){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}