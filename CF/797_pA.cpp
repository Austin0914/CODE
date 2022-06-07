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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int b=n;
        if(n%3==0){
            b/=3;
            b++;
        }else{
            b/=3;
            b+=2;
        }
        cout<<((n-b)/2)+1<<" "<<b<<" "<<(n-b)-((n-b)/2)-1<<endl;
    }
}