#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false); cin.tie(NULL);
void solve(){
    ll n;cin>>n;
    vector<ll>hooves(n + 1 , 0) , sciss(n + 1 , 0) , paper(n + 1 , 0);
    for(int i = 1 ; i <= n ; i++){
        hooves[i] += hooves[i - 1];
        sciss[i] += sciss[i - 1];
        paper[i] += paper[i - 1];
        char a;
        cin>>a;
        if(a == 'H') paper[i]++;
        else if(a == 'S') hooves[i]++;
        else if(a == 'P') sciss[i]++;
    }
    ll maxwins = 0;
    for(int i = 1 ; i <= n ; i++){
        ll maxi = max(hooves[i] , max(sciss[i] , paper[i]));
        ll after_wins = max(
            hooves[n] - hooves[i] , max(sciss[n] - sciss[i] , paper[n] - paper[i])       
        );
        maxwins = max(maxwins , maxi + after_wins);
    }
    cout<<maxwins<<endl;
}
int32_t main(){
    IOS;
    solve();
    return 0;
}