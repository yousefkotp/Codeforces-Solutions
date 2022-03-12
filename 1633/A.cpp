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
        int n;
        cin>>n;
        if(n%7==0){
            cout<<n<<endl;
            continue;
        }
        if(n%10==0){
            cout<<n-(n%7)+7<<endl;
            continue;
        }
        int ans =0;
        int cnt=0;
        for(int i=n;i<=n+(7-n%7);i++){
            if(i%10==0)
                cnt++;
            if(i%7==0 &&cnt==0)
                ans =i;
        }

        cnt=0;
        for(int i=n;i>=n-(n%7);i--){
            if(i%10==0)
                cnt++;
            if(i%7==0&&cnt==0)
                ans =i;
        }
        cout<<ans<<endl;

    }
    return 0;
}
