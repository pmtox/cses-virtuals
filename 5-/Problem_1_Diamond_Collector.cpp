#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n , k;
    cin>>n>>k;
    vector<int>arr;
    for(int i = 0 ; i < n ; i++){
        int x;cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin() , arr.end());
    int cnt = 0;
    int ans = 0;
    for(int i = 0 ; i < n - 1 ; i++){
        int cnt = 0;
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] - arr[i] <= k){
                cnt++;
            }
        }
        ans = max(ans , cnt);
    }
    cout<<ans<<endl;
}
int32_t main(){
    solve();
    return 0;
}