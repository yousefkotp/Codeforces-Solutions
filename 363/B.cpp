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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int s[n+1];
    s[0]=0;
    for(int i=1;i<n+1;i++)
        s[i] = s[i-1]+arr[i-1];
    int l,r,m=INT_MAX,x=1;

    for(int i=0;i<n+1-k;i++){
        int ans = min(s[i+k]-s[i],m);
        if(ans<m){
            m=ans;
            x=i+1;
        }

    }
    cout<<x;

    return 0;
}
