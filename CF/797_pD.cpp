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
    int t;cin>>t;
    int t;
    cin>>t;
    
    while(t--){
        int n,k;cin>>n>>k;
        vector<char>arr;
        char c;
        for(int i=0;i<n;i++){
            cin>>c;
            arr.pb(c);
        }
        int j=0;
        vi d;
        for(int j=0;j<n;j++){
            int count=0;
            int k=j;
            while(arr[k]==arr[k+1]&&arr[k]=='B'){
                count++;
                k++;
            }
            k--;
            if(arr[k]=='B')d.pb(k);
        }
        for(int it:d){
            int s=it;
            while(arr[s]){

            }
        }
    }
}