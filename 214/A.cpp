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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,counter=0;
    cin>>n>>m;
    for(int i=0;i*i<=max(n,m);i++){
        for(int j=0;j*j<=min(n,m);j++){
            if(i*i + j ==max(n,m) && i + (j*j) ==min(n,m) ){
                counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}
