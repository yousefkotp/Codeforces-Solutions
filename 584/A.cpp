#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    if(1+floor(log10(t))>n)
        cout<<-1;
    else if(t==10){
        for(int i=0;i<n-1;i++)
            cout<<1;
        cout<<0;
    }
    else
        for(int i=0;i<n;i++)
            cout<<t;


    return 0;
}
