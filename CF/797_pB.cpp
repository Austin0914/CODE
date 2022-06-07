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
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi a,b;
        for(int i=0,t;i<n;i++){
            cin>>t;a.pb(t);
        }
        for(int i=0,t;i<n;i++){
            cin>>t;b.pb(t);
        }
        int bia;
        int max_zerobia=0;
        bool jud=true,jud_2=true;
        for(int i=0,t;i<n;i++){
            t=a[i]-b[i];
            if(t<0){
                cout<<"NO"<<endl;
                jud=false;
                break;
            }
            if(jud_2){
                if(b[i]==0){
                    max_zerobia=max(max_zerobia,a[i]);
                }else{
                    bia=t;
                    jud_2=false;
                }
            }
            if(t!=bia){
                if(b[i]==0){
                    max_zerobia=max(max_zerobia,a[i]);
                }else{
                    jud=false;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        if(jud){
            if(bia<max_zerobia&&!jud_2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
        
    }
}