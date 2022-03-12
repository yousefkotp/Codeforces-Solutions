#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    string e = "hello";
    int counter=0;
    for(int i =0;i<s.size();i++){
        if(s[i]==e[counter] ){
            counter++;
        }
    }
    if(counter >4)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
