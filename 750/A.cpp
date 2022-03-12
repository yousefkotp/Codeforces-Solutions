#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
int getSum(int x){
    int sum=0;
    for(int i=1;i<=x;i++)
        sum+= (5*i);
    return sum;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0;
    for(int i=1;i<=n;i++)
        sum+= (5*i);
    int l,r,mid,time =240-k;
    l =0;
    r=n;
    int last=0;
    while(l<=r){
        mid = l+ (r-l)/2;
        if(getSum(mid)<=time){
            l=mid+1;
            last =mid;
        }else{
            r=mid-1;
        }
    }
    cout<<last;
    return 0;
}
