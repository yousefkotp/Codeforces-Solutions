#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)

using namespace std;

int main()
{
    long int n,sum=0;
    cin>>n;
    string arr[n];
    loop
        cin>>arr[i];
    loop{
        if(arr[i] == "Tetrahedron")
            sum+=4;
        else if(arr[i] == "Cube")
            sum+=6;
        else if (arr[i]== "Octahedron")
            sum+= 8;
        else if (arr[i] == "Dodecahedron")
            sum+=12;
        else
            sum+=20;
    }
    cout<<sum;

    return 0;
}
