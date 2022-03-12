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
    int n;
    string s;
    cin>>n>>s;
    unordered_set<char>se;
    map<char,int>m;
    unordered_set<char>k;
    for(int i=0;i<s.size();i++){
        se.insert(s[i]);
    }
    int ans=INT_MAX;
    int l=0,r=0;

    while(r<=n){
        if(k.size()==se.size()){
            ans = min(ans,r-l);
            if(m[s[l]]==1){
                k.erase(s[l]);
                m[s[l]]=0;
            }
            else
                m[s[l]]--;
            l++;
        }else{
            k.insert(s[r]);
            m[s[r]]++;
            r++;
        }

    }
    cout<<ans;
    return 0;
}
