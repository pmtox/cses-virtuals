#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n , k;cin>>n>>k;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int cnt = 0;
    double sum = accumulate(arr.begin() , arr.end() , 0);
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            int x = arr[i] + arr[j];
            int ttl = sum - (x);
            if(((ttl / 2) + x) > k){
                cnt++;
            } 
        }
    }
    cout<<cnt<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}