#include <bits/stdc++.h>
#define pb push_back 
#define pii pair<int,int> 
#define endl "\n"
#define vi vector<int>
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

struct edge{
    int u;
    int v;
    int w;
};

vector<edge> arr;
int group[200010];int n,m;

bool compare(edge a,edge b){
    return a.w<b.w;
}
inline int find(int k){
    if(k==group[k]){
        return k;
    }else{
        int root=find(group[k]);
        group[k]=root;
        return root;
    }
}

inline bool merge(int x,int y){
    int xx=find(x),yy=find(y);
    if(xx==yy){
        return false;
    }else{
        if(xx<yy)swap(xx,yy);
        group[xx]=yy;
        return true;
    }
}

inline void init(){
    for(int i=1;i<=n;i++)group[i]=i;
}

long long kruskal(){
    long long weight=0;
    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<m;i++){
    	if(merge(arr[i].u,arr[i].v)){
            weight+=arr[i].w;
        }
    }
    return weight;
}

int main(){
    io
    cin>>n>>m;
    init();
    struct edge e;  
    for(int i=0,a,b,c;i<m;i++){
        cin>>a>>b>>c;
        if(a>b)swap(a,b);
        e.u=a;e.v=b;e.w=c;
        arr.pb(e);
    }
    cout<<kruskal()<<endl;
    return 0;
}
