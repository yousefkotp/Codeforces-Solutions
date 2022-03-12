#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)

using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;
    if(n==0)
        cout<<1;
    else{
        if(n%4==0)
        cout<<6;
    else if(n%4==1)
        cout<<8;
    else if (n%4 ==2)
        cout<<4;
    else
        cout<<2;
    }
    
    return 0;
}
