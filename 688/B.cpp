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
    string s;
    cin>>s;
    string s2;
    for(long long i=s.size()-1;i>=0;i--){
        s2.push_back(s[i]);
    }
    cout<<s<<s2<<endl;



    return 0;
}
