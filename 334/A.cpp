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
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int arr[n*n];
    for(int i=0;i<n*n;i++)
        arr[i] = i+1;
    int counter =0,i=0,j=n*n-1;
    while(counter<n){
        for(int k=0;k<n/2;k++)
            cout<<arr[i++]<<" "<<arr[j--]<<" ";
        cout<<'\n';
        counter++;
    }
    return 0;
}
