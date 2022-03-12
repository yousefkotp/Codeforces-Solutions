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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1.size()+s2.size()>s3.size()){
        cout<<"NO";
        return 0;
    }
    map<char,int>mp;
    for(int i=0;i<s1.size();i++)
        mp[s1[i]]++;
    for(int i=0;i<s2.size();i++)
        mp[s2[i]]++;
    map<char,int>mp2;
    for(int i=0;i<s3.size();i++)
        mp2[s3[i]]++;
    map<char,int>::iterator it=mp2.begin();
    while(it!=mp2.end()){
        if(mp[it->first]!=it->second)
            {
                cout<<"NO";
                return 0;
            }
        it++;
    }
    cout<<"YES";
    return 0;
}
