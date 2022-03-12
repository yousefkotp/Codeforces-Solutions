#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)

using namespace std;

int main()
{
    unsigned long long int n,m,a;
    cin>>n>>m>>a;
    double b = ceil(1.0 *n/a);
    double c = ceil(1.0*m/a);
    unsigned long long d = b*c;
    cout<< d ;

    return 0;
}
