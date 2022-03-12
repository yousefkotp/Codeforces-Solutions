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
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        if(arr[i]+arr[i+1]>arr[i+2] && arr[i]+arr[i+2]>arr[i+1] && arr[i+2]+arr[i+1]>arr[i])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
