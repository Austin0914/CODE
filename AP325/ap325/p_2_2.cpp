#include <bits/stdc++.h>
#define endl "\n"
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 10
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

vi arr;
set<int> st;
map<int,int>mp;
int binary_search_set(int target){
    auto lr=st.lower_bound(target);
    return distance(st.begin(),lr);
}

int main(){
    io
    int n;cin>>n;
    
    for(int i=0,t;i<n;i++){
        cin>>t;
        arr.pb(t);
        st.insert(t);
    }
    int j=0;
    for(auto it:st){
        mp[it]=j;
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<mp.find(arr[i])->second<<" ";
        // cout<<binary_search_set(arr[i])<<" ";        
    }
}