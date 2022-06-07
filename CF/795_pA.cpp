#include <bits/stdc++.h>
#define endl "\n"
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define MAXN 5
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    io
    int t;cin>>t;
    while(t--){
        int n,odd=0,even=0;cin>>n;
        for(int i=0,t;i<n;i++){
            cin>>t;
            if(t%2==0)even++;
            else odd++;
        }
        cout<<min(odd,even)<<endl;
    }
}