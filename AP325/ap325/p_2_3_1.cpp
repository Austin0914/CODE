#include <bits/stdc++.h>
#define endl "\n"
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<long long>
#define MAXN 10
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

ll x,y,p;

ll quick_binary(ll x,ll y,ll p){
    if(y==0)return 1;
    if(y%2)return (quick_binary(x,y-1,p)*x)%p;
    ll t=quick_binary(x,y/2,p);
    return (t*t)%p;
}

int main(){
    io
    cin>>x>>y>>p;
    cout<<quick_binary(x,y,p);
}