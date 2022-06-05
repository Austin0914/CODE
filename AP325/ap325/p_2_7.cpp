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
    vector<set<int>>arr;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        set<int>ss;
        for(int j=0;j<s.length();j++){
            ss.insert((int)s[j]-65);
        }
        arr.pb(ss);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            multiset<int>sum;
            for(int it:arr[i]){
                sum.insert(it);
            }
            for(int it:arr[j]){
                sum.insert(it);
            }
            if(sum.size()==m){
                ans++;
            }
        }
    }
    cout<<ans;
}