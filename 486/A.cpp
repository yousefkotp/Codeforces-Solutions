#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)

using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;
    if(n%2==0){
        long long  x = n- (n/2);
        cout<< x;
    }else{
        long long  x =floor(1.0*n/2) - n;
        cout<< x;
    }

    return 0;
}
