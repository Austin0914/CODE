#include <bits/stdc++.h>
using namespace std;
#define N 500000
#define P 1000000009

int ran30(int n) {
    return rand()%n+1;
}

int main() {
    set<int> S;
    for (int i=0;i<N;i++)
        S.insert(ran30(P));

    vector<int> v;

    int n=100;

    for (int i=0;i<n;i++) v.push_back(ran30(P));

    clock_t t1,t2;

    t1=clock();

    int total=0;

    for (int x:v) {
        auto f=S.lower_bound(x);

        if (f!=S.end())
            total=(total+*f)%P;
    }
    t2=clock();

    printf("total=%d, time=%f\n",total,(float)(t2-t1)/CLOCKS_PER_SEC);
    // misusing lower_bound

    t1=clock();

    total=0;

    for (int x:v) {
        auto f=lower_bound(S.begin(), S.end(), x);
        if (f!=S.end())
            total=(total+*f)%P;
    }
    t2=clock();

    printf("bad using lower_bound, total=%d, time=%f\n", \
    total,(float)(t2-t1)/CLOCKS_PER_SEC);
    return 0;
}