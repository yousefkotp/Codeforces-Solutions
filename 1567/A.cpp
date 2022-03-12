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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        vector<char>v2;
        for(int i=0;i<n;i++){
            if(v[i]=='U')
                v2.push_back('D');
            else if(v[i]=='L')
                v2.push_back('L');
            else if(v[i]=='R')
                v2.push_back('R');
            else
                v2.push_back('U');
        }

        for(int i=0;i<n;i++)
            cout<<v2[i];
        cout<<'\n';
    }

    return 0;
}
