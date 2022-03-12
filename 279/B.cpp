#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;

int main()
{
    io
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int arr[n+1];
    arr[0]=0;

    for(int i=1;i<n+1;i++)
        arr[i] = v[i-1]+arr[i-1];
    int max =-1;
    for(int i=1;i<=n;i++){
        int l =0,r=n-i,mid;
        while(l<=r){

            mid = l +(r-l)/2;
            if(arr[i+mid]-arr[i-1]==t){
                l=mid+1;
                break;
            }else if(arr[i+mid]-arr[i-1]>t)
                r= mid-1;
            else
                l =mid+1;
        }
        if(l>max)
            max = l;
    }
    cout<<max<<endl;





    return 0;
}
