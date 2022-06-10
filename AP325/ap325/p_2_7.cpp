#include <bits/stdc++.h>
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define MAXN 50005
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

using namespace std;

int main(){
    io
    int m,n;
    cin>>m>>n;
    int t=(1<<m)-1;
    int ans=0;

    map<int,int>mp;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        int sum=0;
        for(int j=0;j<s.size();j++){
            sum|=(1<<(s[j]-'A'));
        }
        ans+=mp[sum^t];
        mp[sum]++;
    }
    cout<<ans;
}