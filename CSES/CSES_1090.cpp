#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 10
#define MOD 1000000009
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

using namespace std;

int main(){
    io
    vi arr;
    int n,size;cin>>n>>size;
    for(int i=0,t;i<n;i++){
        cin>>t;
        arr.pb(t);
    }
    sort(arr.begin(),arr.end());
    int num=0,l=0,r=n-1,ans=0;
    while(num!=n&&l<r){
        int sum=arr[l]+arr[r];
        if(sum<=size){
            num++;
            l++;
        }
        r--;
        ans++;
        num++;
    }
    if(r==l)ans++;
    cout<<ans;
}