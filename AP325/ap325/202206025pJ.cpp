#include <bits/stdc++.h>
#define endl "\n"
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<long long>
#define MINM 1000000000000
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int n;
vector<ll> arr,sum;

ll solve(ll k){
    ll maxv=-MINM;
    for(int i=k+2;i<n-3;i++){
        maxv=max(maxv,solve(i));
    }
    return sum[k];
}

int main(){
    io
    cin>>n;
    for(int i=0,t;i<n;i++){
        cin>>t;
        arr.pb(t);
    }
    for(int i=0,t;i<n-3;i++){
        ll c=0;
        for(int j=i;j<i+4;j++){
            c+=arr[j];
        }
        sum.pb(c);
    }
    ll ans=0;
    for(ll i=0;i<n-3;i++){
        cout<<solve(i)<<endl;
        ans=max(ans,solve(i));
    }
    cout<<ans;
}