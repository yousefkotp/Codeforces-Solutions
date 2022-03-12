#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int i;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B'){
            cout<<" ";
            i+=2;
        }
        else
            cout<<s[i];
    }

    return 0;
}
