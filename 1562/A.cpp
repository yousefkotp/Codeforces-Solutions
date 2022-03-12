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
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        //int arr[r-l+1];
        //for(int i=0;i<r-l+1;i++)
        //arr[i]= l+i;
        if(l>r/2)
        {
            cout<<r%l<<endl;
        }
        else
        {
            if(r%2==0)
            {
                cout<<(r/2)-1<<endl;
            }
            else
            {
                cout<<r/2<<endl;
            }
        }


    }
    return 0;
}
