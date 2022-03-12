#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
#include<numeric> for C++17
#include <algorithm>
using namespace std;

int main()
{
    int index,n,m,flag=0;
    vector<int> arr={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin>>n>>m;
    for(int i=2;i<m;i++)
        if(m%i==0)
            flag =1;
    if(flag){
        cout<<"NO";
    }else{
        for(int i=0;i<arr.size();i++){
            if(arr[i]==n){
                index = i;
                break;
            }
        }
        if(arr[index+1]==m)
            cout<<"YES";
        else
            cout<<"NO";
    }


    return 0;
}
