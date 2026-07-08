#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int sum = 0 , ans = INT_MIN;
    int i = 0 , j = 0;
    while(j < n){
        if(sum < 0){
            sum = 0;
            i = j;
        }
        if(i < j){
            if((arr[j] ^ arr[j - 1]) & 1){
                sum += arr[j];
                i = j;
            }
            else{
                sum = arr[j];
                i = j;
            }
        }
        else{
            sum = arr[j];
        }
        ans = max(ans , sum);
        j++;
    }
    cout<<ans<<endl;
}
int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}