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
    sieve[1]=0;

}

int main()
{
    io;
    int m,n;
    cin>>m>>n;
    int mx =max(m,n);
    int mi=min(m,n);
    int mn = min(m,n);
    int counter=0;
    for(int i=0;i<mi &&mn>=2;i+=2){
        counter+=mx;
        mn-=2;
    }
    if(mn==1)
        counter+=mx/2;
    cout<<counter;



    return 0;
}
