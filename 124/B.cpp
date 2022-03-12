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

int main()
{
    io;
    int n,k;
    cin>>n>>k;
    vector<string>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans =INT_MAX;
    vector<int> perm(k);
    for(int i=0;i<k;i++)
        perm[i]=i;
    
    do{
        int mx= INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=0;j<k;j++){
                x*=10;
                x+=v[i][perm[j]]-'0';
            }

            mx = max(mx,x);
            mn= min(mn,x);
        }
        ans = min(ans,mx-mn);
    }while(next_permutation(perm.begin(),perm.end()));
    cout<<ans;
    return 0;
}
