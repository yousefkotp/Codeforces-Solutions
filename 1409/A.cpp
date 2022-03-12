#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    sieve[1]=0;//return it to 0

}

int main()
{
    io;
    int t;
    cin>>t;
    while(t--){
        double a,b;
        cin>>a>>b;
        if(a>=b)
            cout<<(int)ceil((a-b)/10)<<endl;
        else
            cout<<(int)ceil((b-a)/10)<<endl;

    }

    return 0;
}
