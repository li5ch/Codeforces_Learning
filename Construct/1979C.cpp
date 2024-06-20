#include <bits/stdc++.h>
//原先的std命名空间也不能省
using namespace std;

// using LL = long long;
#define FOR(i, x, y) for (decay<decltype(y)>::type i = (x), _##i = (y); i <=_##i; ++i)
#define FORD(i, x, y) for (decay<decltype(x)>::type i = (x), _##i = (y); i > _##i; --i)
#define L(i, j, k) for(int i = (j); i <=(k); ++i)
#define R(i, j, k) for(int i = (j); i >= (k); --i)
#define ll long long
#define vi vector <int>
#define sz(a) ((int) (a).size())
#define me(f, x) memset(f, x, sizeof(f))
#define uint unsigned int

ll f(ll a,ll b){
    return (a+b)*(a*a+b*b);
}
#define M 5001
#define N 5001
ll Y[N];
ll X[N];
int n,m;
int k[30];
ll ans;

void dfs(int i,ll t,int cnt){

    if(i==n){
        ans=max(ans,t);
        return;
    }
    dfs(i+1,t+X[i]+Y[cnt+1],cnt+1);
    dfs(i+1,t,0);
}
ll dp[M][N];

int main() {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt","w", stdout);
//
    int a[0];
    a[1]=2;
    a[3]=4;
    L(i,0,3){
        cout<<a[i]<<endl;
    }

    return 0;
}   