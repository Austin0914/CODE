#include <bits/stdc++.h>

using namespace std;

vector<char> a;
int indexpiyan = -1;

int solve(){
    cout<<indexpiyan<<endl;
    indexpiyan += 1;
    if(a[indexpiyan] == 'f'){
        return (2*solve() - 1);
    }
    else if(a[indexpiyan] == 'g'){
        return (solve() + (2 * solve()) - 3);
    }
    else return (int)a[indexpiyan]-48;
}

int main(){
    // int t=19;
    // int b;
    // while(t--){
    //     cin>>b;
    //     if(1<=b&&b<=9)a.push_back(b);
        
    // }
    // for(auto it:a)cout<<it<<" ";cout<<endl;
    // cout<<solve();
    int a;
    cin>>a;
    cout<<a;
}