#include <bits/stdc++.h>
#define pb push_back 
#define pp push
#define pii pair<int,int> 
#define endl "\n"
#define vi vector<int>
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

vi arr[100010];
vi in_degree(100010,0);
vi ans;
int n,m;

inline void init(){
    for(int i=0;i<n;i++){
        arr[i].clear();
        in_degree[i]=0;
    }
    ans.clear();
}

bool topological_sort(){
    priority_queue<int,vector<int>,greater<int>>qe;

    for(int i=0;i<n;i++){
        if(in_degree[i]==0){
            qe.pp(i);
        }
    }

    if(qe.empty())return false;

    while(!qe.empty()){
        int actop=qe.top();
        qe.pop();
        ans.pb(actop);

        for(int it:arr[actop]){
            in_degree[it]--;
            if(in_degree[it]==0)qe.pp(it);
        }
        if(qe.empty()&&ans.size()!=n)return false;
    }
    for(int i=0;i<n;i++)if(in_degree[i]!=0)return false;
    return true;
}   


int main(){
    io
    int T;cin>>T;
    int a,b;
    while(T--){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            arr[a].pb(b);
            in_degree[b]++;
        }
        if(topological_sort()&&ans.size()==n){
            for(int i=0;i<n-1;i++){
                cout<<ans[i]<<" ";
            }cout<<ans[n-1]<<endl;
        }else{
            cout<<"QAQ"<<endl;
        }
        init();
    }

    return 0;
}
