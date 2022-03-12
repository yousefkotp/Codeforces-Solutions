#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n,m,flag=0;
    cin>>n>>m;
    char x[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>x[i][j];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(x[i][j]=='C' ||x[i][j]=='Y' ||x[i][j]=='M')
                flag =1;
        }
    }
    if(flag)
        cout<<"#Color";
    else
        cout<<"#Black&White";

    return 0;
}
