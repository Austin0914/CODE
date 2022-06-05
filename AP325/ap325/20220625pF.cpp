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

int main(){
    io
    int n,m;
    cin>>n>>m;
    vector<ll> arr;
    for(int i=0;i<n;i++){
        ll sum=0,ten=1;
        for(int j=0,k;j<m;j++){
            cin>>k;
            sum+=(k%2)*ten;
            ten*=10;
        }
        arr.pb(sum);
    }
    sort(arr.begin(),arr.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            ll k=i;
            while(arr[k]==arr[k+1]){
                k++;
            }
            ll n=k-i;
            ans+=((n+1)*n)/2;
            i=k;
        }
    }
    cout<<ans;
}