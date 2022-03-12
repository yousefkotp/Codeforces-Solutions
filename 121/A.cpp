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
vector<long long>v;
void fi(long long x,int y){
    v.push_back(x);
    if(y==10)
        return;
    fi((x*10)+4,y+1);
    fi((x*10)+7,y+1);
}
long long min(long long x,long long y){
    if(x>y)
        return y;
    else
        return x;
}
int main()
{
    io;
    int l,r;
    cin>>l>>r;
    fi(4,1);
    fi(7,1);
    long long sum=0;
    sort(v.begin(),v.end());
    for(long long i=l;i<=r;i++){
        long long x= *lower_bound(v.begin(),v.end(),i);
        sum+=(min(x,r)-i+1)*x;
        i=x;
    }
    cout<<sum;
    return 0;
}
