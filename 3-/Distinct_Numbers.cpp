#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    set<int>st;
    for(int it : arr){
        st.insert(it);
    }
    cout<<st.size()<<endl;
}
int32_t main(){
    solve();
    return 0;
}