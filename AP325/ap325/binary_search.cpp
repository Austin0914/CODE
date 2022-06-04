#include <bits/stdc++.h>
#define endl "\n"
#define ff first
#define ss second 
#define pb push_back
#define pii pair<int,int>
#define MAXN 10
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


bool cmp_pii(pii x,pii y){
    return x<y;
}

int binary_search(int l,int r){
    while(l<=r){
        int mid=(l+r)/2;
        if(t==arr[mid])return mid;
        if(arr[mid]>t)r=min-1;
        else l=min+1;
    }
    return -1;
}

int main(){
    //lower bound,upper bousnd
    // vector<int>arr;
    // for(int i=0,t;i<MAXN;i++){
    //     cin>>t;
    //     arr.pb(t);
    // }
    
    // sort(arr.begin(),arr.end());
    
    // for(int it:arr){
    //     cout<<it<<" ";
    // }cout<<endl;

    // vector<int>::iterator lr=lower_bound(arr.begin(),arr.end(),5);
    // vector<int>::iterator ur=upper_bound(arr.begin(),arr.end(),5);
    // cout<<it-arr.begin();
    //lower bound,upper bound,pair
    vector<pii>arr;
    for(int i=0,a,b;i<MAXN/2;i++){
        cin>>a>>b;
        arr.pb({a,b});
    }
    sort(arr.begin(),arr.end(),cmp_pii);    

    for(auto it:arr){
        cout<<it.ff<<" "<<it.ss<<endl;
    }
    pii target={2,3};

    auto lr=lower_bound(arr.begin(),arr.end(),target);
    auto ur=upper_bound(arr.begin(),arr.end(),target);
    
    if(lr-ur){
        cout<<lr-arr.begin()<<endl;
        cout<<arr[lr-arr.begin()].ff<<" "<<arr[lr-arr.begin()].ss<<endl;
    }else{
        cout<<"Not found";
    }

    
}