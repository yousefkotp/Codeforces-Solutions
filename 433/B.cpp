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
    int n;
    cin>>n;
    int arr[n+1];
    long long int sum1[n+1],sum2[n+1];
    arr[0]=0;
    sum1[0]=0;
    sum2[0]=0;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
        sum1[i]= sum1[i-1]+arr[i];
    sort(arr,arr+n+1);
    for(int i=1;i<=n;i++)
        sum2[i] = sum2[i-1]+arr[i];
    int m,l,r,t;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>t>>l>>r;
        if(t==1){
            cout<<sum1[r]-sum1[l-1]<<'\n';
        }else{
            cout<<sum2[r]-sum2[l-1]<<'\n';
        }
    }
    return 0;
}
