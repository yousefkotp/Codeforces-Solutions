#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int p[n];
    loop
        cin>>p[i];
    for(int i=0;i<n;i++){
        if(p[i]%2==1)
            cout<<2<<" "<<p[i]-1 <<endl;
    }

    return 0;
}
