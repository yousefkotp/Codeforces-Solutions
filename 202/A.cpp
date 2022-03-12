#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
int main()
{
    string s;
    cin>>s;

    int arr[26]={0};
    for(int i=0;i<s.size();i++)
        arr[s[i]-'a']++;

    for(int i=25;i>=0;i--){
        if(arr[i]>0){
            for(int j=0;j<arr[i];j++)
                cout<<char(i+'a');
            break;
        }
    }

    return 0;
}
