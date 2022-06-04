#include <bits/stdc++.h>
#define endl "\n"
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define MAXN 100005
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    set<int>s;
    int x;cin>>x;
    for(int i=0,t;i<x;i++){
        cin>>t;
        s.insert(t);
    }
    cout<<s.size()<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }

}