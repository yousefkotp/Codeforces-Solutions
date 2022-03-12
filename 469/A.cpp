#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n,x,y,sum=0,sum2=0;
    cin>>n;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
        cin>>arr[i];
    cin>>y;
    int arr2[y];
    for(int i=0;i<y;i++)
        cin>>arr2[i];
    set<int>xx;
    for(int i=0;i<x;i++)
        xx.insert(arr[i]);
    for(int i=0;i<y;i++)
        xx.insert(arr2[i]);
    if(xx.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}
