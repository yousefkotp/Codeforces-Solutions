#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(v)				((int)((v).size()))
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
    int n,d;
    cin>>n>>d;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    sort(v.begin(),v.end());
    long long cs[n+1]={0};
    for(int i=1;i<=n;i++)
        cs[i]=cs[i-1]+v[i-1].second;


    long long max=-1;
    for(int i=0;i<n;i++){
        int l =i,r=n-1,mid;
        while(l<=r){
            mid = l+(r-l)/2;
            if(v[mid].first-v[i].first>=d)
                r = mid-1;
            else
                l=mid+1;
        }
        if(max<cs[l]-cs[i])
            max = cs[l]-cs[i];
    }
    cout<<max;
    return 0;
}
