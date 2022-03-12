#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define approx(x) cout<<fixed<<setprecision(x);
using namespace std;
int sieve[1000001];

void generate_sieve()
{
    for(long long i=3; i<1000001; i+=2)
        sieve[i]=i;

    for(long long i=3; i<1000001; i+=2)
        if(sieve[i]==i)
            for(long long j=i*i; j<1000001; j+=i)
                sieve[j]=0;

    sieve[2]=2;
    sieve[1]=1;//return it to 0

}
const int maxn = 2e5 + 10;
int n,m;
int solve(int x,int y){
    if(x==m){
        cout<<y;
        return y;
    }else if(x>m){
        return 0;
    }
    return solve(x*2,y+1)||solve(x*3,y+1);

}
int main()
{
    io;
    cin>>n>>m;
    if(n==m){
        cout<<0;
        return 0;
    }
    int ans = solve(n,0);
    if(!ans)
        cout<<-1;
    return 0;
}
