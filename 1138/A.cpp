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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int>counters;
    for(int i=0;i<n;i++){
        int counter=1;
        while(v[i]==v[i+1]&&i<n-1){
            counter++;
            i++;
        }
        counters.push_back(counter);
    }
    int m = INT_MIN;
   
    cout<<endl;
    for(int i=0;i<counters.size()-1;i++){
        m = max(m,min(counters[i],counters[i+1]));
    }
    cout<<2*m;

    return 0;
}
