#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#include<numeric> for C++17
using namespace std;


int main()
{
    int x,y,z;
    int sum=0;
    cin>>x>>y>>z;
    int a,b,c;
    a = sqrt(x*y/z);
    b = sqrt(x*z/y);
    c= sqrt(y*z/x);
    cout<<4*(a+b+c);
    return 0;
}
