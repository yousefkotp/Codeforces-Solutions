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
    cin>>n>>m;
    char x;
    cin>>x;
    set <char>s;
    char arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x ){
                if(arr[i-1][j] !='.' && i>0)
                    s.insert(arr[i-1][j]);
                if(arr[i][j-1]!='.' && j>0)
                    s.insert(arr[i][j-1]);
                if(arr[i][j+1]!='.' && j<m-1)
                    s.insert(arr[i][j+1]);
                if(arr[i+1][j]!='.' && i<n-1)
                    s.insert(arr[i+1][j]);
            }
        }
    }
    s.erase(x);
    cout<<s.size();
    return 0;
}
