#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 1000005
#define MOD 1000000007
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

using namespace std;

int main(){
    io
    int n;cin>>n;
    int arr[MAXN];
    arr[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=i-6;j--){
            if(j>=0){
                arr[i]+=arr[j];
                arr[i]%=MOD;
            }
        }
    }
    cout<<arr[n];
}