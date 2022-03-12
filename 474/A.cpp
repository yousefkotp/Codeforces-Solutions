#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    string s= "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string str;
    cin>>str;

    if(x=='R'){
        for(int i=0;i<str.size();i++){
            str[i]= s[s.find(str[i])-1];
        }
    }else{
        for(int i=0;i<str.size();i++){
            str[i]= s[s.find(str[i])+1];
        }
    }
    cout<<str;

    return 0;
}
