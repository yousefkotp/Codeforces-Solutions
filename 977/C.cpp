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
const int maxn = 2e5 + 10;

int main()
{
    io;
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    vector<int>sorted(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        sorted[i]=v[i];
    }
    sort(sorted.begin(),sorted.end());
    int l=1,r=1e9,mid,ans=-1;
    while(l<=r){
        mid = l+ (r-l)/2;
        if(upper_bound(sorted.begin(),sorted.end(),mid)-sorted.begin()>k){
            r =mid-1;
        }else if(upper_bound(sorted.begin(),sorted.end(),mid)-sorted.begin()<k)
            l=mid+1;
        else{
            ans = mid;
            r= mid-1;
        }

    }
    cout<<ans;

    return 0;
}
