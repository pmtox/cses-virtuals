#include<deque>
#include<iostream>
#include<vector>
#include<cstdint>
using namespace std;
#define ll long long
#define IOS ios::sync_with_stdio(false);cin.tie(nullptr);
#define deq deque<ll>
#define f(i , x) for(ll i = 0 ; i < ( x ); i++)
void solve1(){
    ll n;cin>>n;
    deq dq;
    f(i , n){
        int x ; cin>>x;
        if(x % 2 == 0){
            dq.push_front(x);
        }
        else{
            dq.push_back(x);
        }
    }
    f(i , n){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}
void solve2(){
    ll n , k;cin>>n>>k;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    ll i = 0 , j = k - 1;
    while(i < j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
    for(ll i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
void solve3(){
    ll n , k;cin>>n>>k;
    deq dq;
    f(i , k){
        ll x;cin>>x;
        dq.push_front(x);
    }
    for(ll i = k ; i < n ; i++){
        ll x;cin>>x;
        dq.push_back(x);
    }
    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;
}
void solve4(){
    string s;cin>>s;
    deque<char> dq;
    for(char c : s){
        dq.push_back(c);
    }
    bool isok = true;
    while(dq.size() > 1){
        if(dq.back() != dq.front()){
            isok = false;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }
    cout<<(isok ? "TRUE" : "FALSE")<<endl;
}
void solve5(){
    ll n , k ; cin>>n>>k;
    vector<ll>arr(n);
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    // You are given an array of integers nums, 
    // there is a sliding window of size k which 
    // is moving from the very left of the array 
    // to the very right. You can only see the 
    // k numbers in the window. Each time the 
    // sliding window moves right by one position.
    // Return the max sliding window.

    deq dq;
    vector<ll>ans;
    f(i , n){
        if(!dq.empty() && dq.front() == i - k){
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()] <= arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i >= k - 1){
            ans.push_back(arr[dq.front()]);
        }
    }
    f(i , ans.size()){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int32_t main(){
    // solve1();
    // solve2();
    // solve3();
    // solve4();
    // solve5();
    return 0;
}