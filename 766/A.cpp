#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    string s1,s2;
    cin>> s1>>s2;
    if(s1==s2)
        cout<<"-1";
    else if(s2.size()>=s1.size())
            cout<<s2.size();
    else
        cout<<s1.size();

    return 0;
}
