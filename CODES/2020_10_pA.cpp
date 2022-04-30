#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    io
    int a,aa,b,bb,c,cc,n;
    cin>>a>>b>>c>>aa>>bb>>cc>>n;
    int max_v=-1000;
    for(int i=0;i<=n;i++){
        int j=n-i;
        max_v=max(max_v,((a*i*i+b*i+c)+(aa*j*j+bb*j+cc)));      
    }
    cout<<max_v;
    return 0;
}