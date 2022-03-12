#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
int evaluate (int x,int k){
    int counter =0;
    while(x!=0){
        counter+=x;
        x/=k;
    }
    return counter;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k;
    cin>>n>>k;

    int mid,l=1,r=n,m=INT_MAX;
    while(l<=r){
        mid = l+ (r-l)/2;
        if(evaluate(mid,k) >= n){
            r=mid-1;
            m =mid;
        }else{
            l=mid+1;
        }
    }
    cout<<m;
    return 0;
}
