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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool flag =false;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=1;i<n-1;i++){
            if(arr[i]!=arr[i-1]&& arr[i]!=arr[i+1]){
                cout<<i+1<<endl;
                flag =true;
            }
        }
        if(flag)
            continue;
        if(arr[0]==arr[1])
            cout<<n<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}
