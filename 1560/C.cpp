#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
#include<numeric> for C++17
using namespace std;


int main()
{
    int t,index =0;
    cin>>t;
    long long int arr[t][2];
    while(t--){
        long long int n,x=1,y=1,horizontal=0,vertical=0,diff=1;
        cin>>n;
        while(x<=n){
            x+=diff;
            diff+=2;
            horizontal++;
        }
        diff-=2;
        x-=diff;
        if(x==n){
            arr[index][0]=1;
            arr[index++][1]=horizontal;
        }
        else if(n<x+horizontal-1){
            while(x!=n){
                x++;
                vertical++;
            }
            arr[index][0]=vertical+1;
            arr[index++][1]=horizontal;
        }else{
            while(y*y<n){
                y++;
                vertical++;
            }
            arr[index][0]=vertical+1;
            arr[index++][1]=y*y-n+1;
        }



    }
    for (int i=0;i<index;i++)
        cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
    return 0;
}
