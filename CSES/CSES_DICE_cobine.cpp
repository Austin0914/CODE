#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 1000005
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define MOD 1000000007
using namespace std;

int arr[MAXN]={0};

int solve(int k){
    if(arr[k]!=0)return arr[k]%MOD;
    for(int i=1;i<=6;i++){
        if(k-i>=0){
            arr[k]+=(solve(k-i)%MOD);
            arr[k]%=MOD;
        }
    }
    return arr[k]%MOD;
}


int main(){
    io
    int n;cin>>n;
    arr[0]=1;
    cout<<solve(n);
}