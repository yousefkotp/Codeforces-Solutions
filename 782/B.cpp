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

bool check(vector<double> x,vector<double>v,double a){
    double l=INT_MIN,r=INT_MAX;
    for(int i=0;i<x.size();i++){
        l = max(l,x[i]-v[i]*a);
        r= min (r,x[i]+v[i]*a);
    }
    if(l-r>1e-9)
        return false;
    return true;
}
int main()
{

    io;
    int n;
    cin>>n;
    vector<double> x(n);
    vector<double>v(n);
    for(int i=0;i<n;i++)
        cin>>x[i];
    for(int i=0;i<n;i++)
        cin>>v[i];
    double l=0,r=1e18,mid;
    double ans;
    while(r-l>1e-7){
        mid = l+(r-l)/2;
        if(check(x,v,mid)){
            ans = mid;
            r = mid;
        }else
            l=mid;
    }
    cout<<fixed<<setprecision(8)<<ans;
    return 0;
}
