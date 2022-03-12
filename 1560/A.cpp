#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
#include<numeric> for C++17
using namespace std;
bool condition(int x){
    if(x%10 ==3 || x%3==0)
        return true;
    return false;
}

int main()
{
    int t,index=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
        cin>>arr[i];

    int arr2[1000];
    for(int i=1;i<=1666;i++){
        if(condition(i))
            continue;
        else
            arr2[index++]=i;
    }


    for(int i=0;i<t;i++)
        cout<<arr2[arr[i]-1]<<endl;

    return 0;
}
