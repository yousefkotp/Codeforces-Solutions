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
const int N= 2e5+5; //max number
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

int main()
{
    io;
    int n;
    cin>>n;
    vector<char>v1(n);
    vector<char>v2(n);
    for(int i=0;i<n;i++)
        cin>>v1[i];

    for(int i=0;i<n;i++)
        cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int n1=0,n2=0;

    for(int i=0;i<n;i++){
        if(v1[i]>v2[i])
            n1++;
        if(v1[i]<v2[i])
            n2++;
    }
    if(n1==n||n2==n)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
