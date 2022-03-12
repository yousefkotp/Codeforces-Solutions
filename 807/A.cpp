#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n,rated=0,flag=0;
    cin>>n;
    pair <int,int>p[n];
    loop
        cin>>p[i].first>>p[i].second;
    loop{
        if(p[i].first != p[i].second)
            rated=1;
    }
    if(!rated){
        for(int i=0;i<n-1;i++){
            if(p[i].first<p[i+1].first){
                flag =1;
                break;
            }
        }
    }
    if(rated)
        cout<<"rated";
    else if( flag==1)
        cout<<"unrated";
    else
        cout<<"maybe";
    return 0;
}
