#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
        cout<<k*2 -1;
    }
    else{
        if(n%2==0)
            cout<< (k-(n/2))*2;
        else
            cout<< (k-((n+1)/2))*2;
    }

    return 0;
}
