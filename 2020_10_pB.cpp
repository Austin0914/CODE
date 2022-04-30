#include <bits/stdc++.h>
#define endl "\n"
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int arr[100][100]={0},ans[100][100]={0};
int R,C,k,m;

void check(int x,int y){
    if(arr[x-1][y]!=-1&&arr[x-1][y]!=0){
        ans[x-1][y]+=(int)arr[x][y]/k;
        ans[x][y]-=(int)arr[x][y]/k;
    }
    if(arr[x][y+1]!=-1&&arr[x][y+1]!=0){
        ans[x][y+1]+=(int)arr[x][y]/k;
        ans[x][y]-=(int)arr[x][y]/k;
    }
    if(arr[x][y-1]!=-1&&arr[x][y-1]!=0){
        ans[x][y-1]+=(int)arr[x][y]/k;
        ans[x][y]-=(int)arr[x][y]/k;
    }
    if(arr[x+1][y]!=-1&&arr[x+1][y]!=0){
        ans[x+1][y]+=(int)arr[x][y]/k;
        ans[x][y]-=(int)arr[x][y]/k;
    }
}

int main(){
    io

    cin>>R>>C>>k>>m;

    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            cin>>arr[i][j];
            ans[i][j]=arr[i][j];
        }
    }

    for(int w=0;w<m;w++){
        for(int i=1;i<=R;i++){
            for(int j=1;j<=C;j++){
                if(arr[i][j]!=-1)check(i,j);
            }
        }
        for(int i=1;i<=R;i++){
            for(int j=1;j<=C;j++){
                arr[i][j]=ans[i][j];
            }
        }
    }
    int min_v=0x3F3F3F3F,max_v=-0x3F3F3F3F;
    for(int i=1;i<=R;i++){
        for(int j=1;j<=C;j++){
            if(arr[i][j]!=-1&&arr[i][j]!=0){
                min_v=min(arr[i][j],min_v);
                max_v=max(arr[i][j],max_v);
            }
        }
    }
    
    cout<<min_v<<endl;
    cout<<max_v;
    return 0;
}