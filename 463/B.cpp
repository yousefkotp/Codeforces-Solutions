#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#include<numeric> for C++17
using namespace std;


int main()
{
    int n,max=-1,x;
    cin>>n;
    lp(i,n){
        cin>>x;
        if(max<x)
            max =x;
    }
    cout<<max;
    return 0;
}
