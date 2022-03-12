#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n,counter1=0,counter2=0,flag=1;
    cin>>n;
    string s[n];
    loop
        cin>>s[i];
    sort(s,s+n);
    loop{
        if(s[i]==s[0])
            counter1++;
        else
            counter2++;
    }
    counter1>counter2?cout<<s[0]:cout<<s[n-1];
    return 0;
}
