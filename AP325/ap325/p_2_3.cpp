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

ll vis[101]={0};

int x,y,p;

ll find_sum(int c){
    if(c==0)return 1;
    if(vis[c]!=0)return vis[c];
    else{
        return vis[c]=find_sum(--c)*2;
    }
    return vis[c];
}

ll find_xy(int y){
    ll sum=1;
    for(int i=0;i<y;i++){
        sum=(sum*x);
    }
    return sum;
}

ll find_binaryY(int k){
    ll ans=1;
    int c=0;
    while(k>=1){
        ll sum=0;
        if(k%2==1)sum=find_sum(c);
        ans*=find_xy(sum);
        k/=2;
        c++;
    }
    return ans;
}

int main(){
    io
    cin>>x>>y>>p;
    vis[1]=2;
    cout<<find_binaryY(y);
}
