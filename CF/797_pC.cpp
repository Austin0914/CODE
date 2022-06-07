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
    int t;
    cin>>t;
    
    while(t--){
        int n;cin>>n;
        vi a,b,ans;
        for(int i=0,t;i<n;i++){
            cin>>t;a.pb(t);
        }
        for(int i=0,t;i<n;i++){
            cin>>t;b.pb(t);
        }
        ans.pb(b[0]-a[0]);
        for(int i=1;i<n;i++){
            if(b[i-1]-a[i]>0){
                if(b[i-1]-b[i]>0){
                    ans.pb(0);
                }else{
                    ans.pb(b[i]-b[i-1]);
                }
            }else{
                ans.pb(b[i]-a[i]);
            }
        }
        for(int it:ans){
            cout<<it<<" ";
        }cout<<endl;
    }
}