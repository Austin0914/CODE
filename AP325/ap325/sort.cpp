#include <bits/stdc++.h>
#define endl "\n"
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define MAXN 5
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

struct point{
    int x;
    int y;
};

bool cmp(point &a,point &b){
    return a.y < b.y;
}

bool cmp_2(pii a,pii b){
    return a.ff < b.ff;
}

int main(){
    
    point arr[MAXN];
    for(int i=0;i<MAXN;i++){
        cin>>arr[i].x>>arr[i].y;
    }

    sort(arr,arr+MAXN,cmp);
    for(int i=0;i<MAXN;i++){
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }

    vector<pii> arr_pii;
    for(int i=0,xx,yy;i<MAXN;i++){
        cin>>xx>>yy;
        arr_pii.pb({xx,yy});
    }
    sort(arr_pii.begin(),arr_pii.end(),cmp_2);

    for(auto it:arr_pii){
        cout<<it.ff<<" "<<it.ss<<endl;
    }
}