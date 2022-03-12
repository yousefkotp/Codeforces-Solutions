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

    int n,m;
    cin>>n>>m;
    int l=m;
    int counter=0;
    while(n-- !=0){
        m--;
        if(m==0){
            m=l;
            n++;
        }
        counter++;
    }
    cout<<counter;


    return 0;
}
