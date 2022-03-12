#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n,flag=0,counter=0;
    cin>>n;
    set<char>s;
    char arr[n][n];
    char x=arr[0][1];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    for(int i=0;i<n;i++){
        if(arr[i][i]!=arr[i][n-1-i] ||arr[i][i]!=arr[0][0])
            flag =1;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s.insert(arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[0][0])
                counter++;
        }
    }
    if(!flag && s.size()==2 &&counter==((n-2)*(n-1))+(n-1))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
