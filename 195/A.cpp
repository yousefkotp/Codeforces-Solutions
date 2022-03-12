#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
bool check(int x,int a, int b,int c){
    if((x*b)+(c*b) >= (a*c))
        return true;
    return false;
}


int main()
{   io;
    int a,b,c;
    cin>>a>>b>>c;
    int l= 1,r = 1000*1000,mid;
    while(l<=r){
        mid = l + (r-l)/2;
        if(check(mid,a,b,c))
            r=mid-1;
        else
            l = mid+1;
    }
    cout<<l;
    return 0;
}
