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
    int n,m;
    cin>>n;
    m=n;
    bool flag =true;
    while(n!=0){
        if(n%10!=7 && n%10!=4){
            flag =false;
            break;
        }
        n/=10;
    }
    if(m%4==0 ||m%7 ==0 ||m%44==0 ||m%47==0 ||m%77==0)
        flag=true;

    if(m)
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
