#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<pair<int , int>> divvs(int n , int x){
    vector<pair<int , int>>ans;
    int cnt = 0;
    while(true){
        ans.push_back({n, cnt});
        if(n == 0){
            break;
        }
        /////////
        n /= x;
        cnt++;
    }
    return ans;
}



void solve(){
    int a,b,x;
    cin>>a>>b>>x;
    if(x == 1){
        cout<<abs(a - b)<<endl;
        return;
    }



    vector<pair<int , int>>A = divvs(a, x);
    vector<pair<int , int>>B = divvs(b, x);
    int ans = 1e18;
    for(int i = 0 ; i < (int)A.size() ; i++){
        int va = A[i].first;
        int da = A[i].second;
        for(int j = 0 ; j < (int)B.size() ; j++){
            int vb = B[j].first;
            int db = B[j].second;
            ans = min(ans , da + db + abs(va - vb));
        }
    }
    cout<<ans<<endl;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}