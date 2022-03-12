#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#include<numeric> for C++17
using namespace std;
int getLastDigit(int n){
    return n%10;
}

int main()
{
    string s;
    cin>>s;
    long long sum=0;
    int counter =0;
    while(s.size()!=1){
        for(long long i =0;i<s.size();i++)
            sum+= s[i]-'0';
        s = to_string(sum);
        sum=0;
        counter++;
    }
    cout<<counter;
    return 0;
}
