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
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];

    long long ans=0, l=0,r=INT_MAX,mid;
    while(l<=r){
        mid = l+(r-l)/2;
        int k=0;
        for(int i=0;i<m;i++){
            while(k<n){
                if(a[k]<=b[i]+mid && a[k]>=b[i]-mid)
                    k++;
                else
                    break;
            }
        }
        if(k==n){
            r=mid-1;
            ans = mid;
        }
        else
            l=mid+1;
    }
    cout<<ans;
    return 0;
}
