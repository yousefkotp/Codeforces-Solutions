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
    cin>>n;
    n++;
    while(true){
        vector<int>v;
        bool flag= false;
        int l=n++;
        while(l!=0){
            v.push_back(l%10);
            l/=10;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                flag =true;
                break;
            }
        }
        if(!flag){
            cout<<n-1;
            return 0;
        }
    }
    return 0;
}
