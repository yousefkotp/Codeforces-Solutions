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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
                cnt1++;
            else
                cnt2++;
        }
        if(cnt1==cnt2)
            cout<<cnt1-1<<endl;
        else
            cout<<min(cnt1,cnt2)<<endl;
    }
    return 0;
}
