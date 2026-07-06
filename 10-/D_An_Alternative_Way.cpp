#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    vector<int>arr1(n) , arr2(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr1[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>arr2[i];
    }
    for(int i = 1 ; i < n ; i++){
        arr1[i] += arr1[i-1];
    }
    for(int i = 1 ; i < n ; i++){
        arr2[i] += arr2[i-1];
    }
    bool isok = true;
    for(int i = 0 ; i < n ; i++){
        if(arr1[i] > arr2[i]){
            isok = false;
            break;
        }
    }
    if(isok){
        cout<<"YES"<<endl;
    }else{
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