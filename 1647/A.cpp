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
        int n;
        cin>>n;
        int l=n;
        int sum1=0,sum2=0;
        int x=1;
        string s;
        while(l>0){
            string y =to_string(x);
            s+=y;
            sum1+=x;
            l-=x;
            x==1?x=2:x=1;
        }
        l=n;
        x=2;
        string s2;
        while(l>0){
            string y =to_string(x);
            s2+=y;
            sum2+=x;
            l-=x;
            x==1?x=2:x=1;
        }
        if(sum2==n)
            cout<<s2<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}
