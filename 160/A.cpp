#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int x=0,n,sum=0,counter=0;
    cin>>n;
    int arr[n];
    loop
        cin>>arr[i];
    loop
        sum+=arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    loop{
        x+= arr[i];

        counter++;
        if(x>ceil(sum/2))
            break;
    }
    cout<<counter;
    return 0;
}
