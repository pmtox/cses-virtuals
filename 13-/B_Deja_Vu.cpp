#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n,q;cin>>n>>q;
    vector<int>arr(n);
    vector<int>qq(q);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < q ; i++){
        cin>>qq[i];
    }
    int prev = 31;
    for(int i = 0 ; i < q ; i++){
        if(qq[i] >= prev) continue;
        int val = 1 << qq[i];
        for(int j = 0 ; j < n ; j++){
            if(arr[j] % val == 0){
                arr[j] += (val / 2);
            }
        }
        prev = qq[i];
    }
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int32_t main(){
    IOS;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}