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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sum1=0,sum2=0;
    bool flag =true;
    for(int i=0,j=s.size()-1;i<s.size()/2,j>=s.size()/2;i++,j--){
        sum1+=s[i]-'0';
        sum2+=s[j]-'0';
        if(s[i]!='4' && s[i] !='7' || s[j]!='7' && s[j]!='4')
            flag =false;
    }
    if(sum1!=sum2 || !flag)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
