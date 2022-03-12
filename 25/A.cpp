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
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    int sum1=0,sum2=0,a,b;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum1++;
            a =i+1;
        }
        else{
            sum2++;
            b= i+1;
        }

    }
    sum1>sum2?cout<<b:cout<<a;
    return 0;
}
