#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;

    map<int, int> c;
    int all = (1 << m) - 1;
    int ans = 0;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;

        int t = 0;
        for(int j = 0; j < str.size(); j++){
            t |= (1 << (str[j] - 'A'));
        }
        
        ans += c[t ^ all];
        c[t]++;
    }
    cout << ans << "\n";

    return 0;
}