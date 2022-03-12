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
    int n,counter =0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int l=1,r=1;
    bool flag =false;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            l = i+1;
            while(i<n-1 && arr[i]>arr[i+1] )
                i++;
            r = i+1;
            flag =true;
            i--;
        }
        if(flag){
            int temp = arr[r-1];
            arr[r-1] = arr[l-1];
            arr[l-1] = temp;
            counter++;
            flag =false;
        }
    }
    if(counter >1|| arr[l-1]<arr[l-2] && l>=2){
        cout<<"no";
    }else{
        cout<<"yes"<<endl;
        cout<<l<<" "<<r<<endl;

    }
    return 0;
}
