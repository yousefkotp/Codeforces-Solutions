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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string word;
        cin>>word;
        char last =0;
        int counter =0;
        for(int i=0;i<word.size();i++){
            for(int j=0;j<s.size();j++){
                if(word[i]==s[j]){
                    if(i==0){
                        last = j;
                        break;
                    }else{
                        counter +=abs(j-last);
                        last = j;
                        break;
                    }

                }
            }
        }
        cout<<counter<<endl;

    }
    return 0;
}
