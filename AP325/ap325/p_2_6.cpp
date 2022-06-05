#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 10
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

using namespace std;

int main(){
    io
    int m,n,k;
    cin>>m>>n>>k;
    vi a,b;
    for(int i=0,t;i<m;i++){
        cin>>t;
        a.pb(t);
    }
    for(int i=0,t;i<n;i++){
        cin>>t;
        b.pb(t);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    for(int i=0;i<m;i++){
        auto lr=lower_bound(b.begin(),b.end(),k-a[i]);
        auto ur=upper_bound(b.begin(),b.end(),k-a[i]);
        if(lr!=ur)ans++;
    }
    cout<<ans;
}