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
    int x,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int min =1000;
    pair<int,int>p;
    for(int i=0;i<n-1;i++){
        if(abs(arr[i+1]-arr[i])<min){
            min = abs(arr[i+1]-arr[i]);
            p.first = i+1;
            p.second = i+2;
        }
    }
    if(abs(arr[n-1]-arr[0])<min)
        cout<<n<< " "<<1;
    else
        cout<<p.first<<" "<<p.second;

    return 0;
}
