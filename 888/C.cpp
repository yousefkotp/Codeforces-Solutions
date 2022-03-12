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
    string s;
    cin>>s;
    int ans=INT_MAX;
    for(int i='a';i<='z';i++){
        int k=0,t=0;
        for(int j=0;j<s.size();j++){
            if(s[j]==i){
                t=0;
            }else{
                t++;
                k=max(t,k);
            }
        }
        ans = min(ans,k);
    }
    cout<<ans+1;
    return 0;
}
