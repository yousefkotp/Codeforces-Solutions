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
    long long n,sum=0;
    cin>>n;
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    while(n!=0){
        if(n%10==4 || n%10==7)
            sum++;
        n/=10;
    }
    for(int i=0;i<14;i++){
        if(sum==arr[i]){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
