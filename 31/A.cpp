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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++){

        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(v[k]==v[i]+v[j]){
                    cout<<k+1<<" "<<j+1<<" "<<i+1;
                    return 0;
                }else if( v[j]==v[k]+v[i]){
                    cout<<j+1<<" "<<max(k,i)+1<<" "<<min(k,i)+1;
                    return 0;
                }else if(v[i]==v[j]+v[k]){
                    cout<<i+1<<" "<<max(j,k)+1<<" "<<min(j,k)+1;
                    return 0;
                }
            }
        }
    }
    cout<<-1;
    return 0;
}
