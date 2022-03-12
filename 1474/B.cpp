#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
bool isPrime(int x){
    for(int i=2;i<x;i++)
        if(x%i==0)
            return false;
    return true;
}


int main()
{   io;
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int x =1+d;
        int ans1=0,ans2=0;
        while(!ans1){
            if(isPrime(x))
                ans1= x;
            else
                x++;
        }
        x+=d;
        while(!ans2){
            if(isPrime(x))
                ans2 =x;
            else
                x++;
        }
        cout<<ans1*ans2<<endl;
    }
    return 0;
}
