#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n>k){
            //we need to get something multiple of k and greater than n
            int rem =ceil((float)n/k);
            int number = rem*k;
            cout<<fixed<<(int)ceil((float)number/n)<<endl;
        }
        else if(k>n){
            cout<<fixed<<(int)ceil((float)k/n)<<endl;
        }else
            cout<<1<<endl;

    }
    return 0;
}
