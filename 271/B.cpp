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
    {
        sieve[i]=i;
    }
    for(long long i=3; i<1000001; i+=2)
    {
        if(sieve[i]==i)
        {
            for(long long j=i*i; j<1000001; j+=i)
            {
                sieve[j]=0;
            }
        }
    }
    sieve[2]=2;
    sieve[1]=0;

}
int main()
{
    io;
    generate_sieve();
    vector<int>v;
    for(int i=0;i<1000001;i++)
        if(sieve[i]>0)
            v.push_back(sieve[i]);


    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    int max = INT_MAX;
    int counter=0;
    for(int i=0;i<n;i++){
        counter=0;
        for(int j=0;j<m;j++){
            if(sieve[arr[i][j]]>0)
                continue;
            int x = *upper_bound(v.begin(),v.end(),arr[i][j]);
            counter+=x-arr[i][j];

        }
        if(counter <max)
            max = counter;
    }
    for(int i=0;i<m;i++){
        counter=0;
        for(int j=0;j<n;j++){
            if(sieve[arr[j][i]]>0)
                continue;
            int x = *upper_bound(v.begin(),v.end(),arr[j][i]);
            counter+=x-arr[j][i];
        }
        if(counter <max)
            max = counter;
    }
    cout<<max;

    return 0;
}
