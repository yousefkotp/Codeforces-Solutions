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
    int n;
    cin>>n;
    char arr[n][n];
    int sum=0;
    bool flag= false;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j+1]=='o' && j<n-1)
                sum++;
            if(arr[i][j-1]=='o' && j>0)
                sum++;
            if(arr[i-1][j]=='o' && i>0)
                sum++;
            if(arr[i+1][j]=='o'&& i<n-1)
                sum++;
            if(sum%2==1){
                flag = true;
                break;
            }
        }
    }
    if(flag)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
