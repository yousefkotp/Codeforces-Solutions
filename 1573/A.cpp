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
{   io;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=false;
        if(s.size()<n)
            flag=true;
        int counter1=0,counter2=0;
        vector<int>counter;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]>'0'){
                counter.push_back(s[i]-'0'+1);
            }
        }
        int sum=0;
        for(auto i:counter)
            sum+=i;
        sum = sum + (s[s.size()-1]-'0');
        cout<<sum<<endl;

    }
    return 0;
}
