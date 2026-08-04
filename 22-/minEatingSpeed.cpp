#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie();
int minEatingSpeed(vector<int>& piles, int h){
        int l = 1;
        int r = *max_element(piles.begin() , piles.end());
        int ans = r;
        while(l <= r){
            int mid = l + (r - l) / 2;
            long long ttl = 0;
            for(int it : piles){
                ttl += (it + mid - 1) / mid; 
            }
            if(ttl <= h){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
void solve(){
    int n , h;cin>>n>>h;
    vector<int>piles(n);
    for(int i = 0 ; i < n ; i++){
        cin>>piles[i];
    }
    int ans = minEatingSpeed(piles , h);
    cout<<ans<<endl;
}
int32_t main(){
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}