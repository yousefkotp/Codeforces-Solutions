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
    int n,x;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int q;
    cin>>q;
    sort(v.begin(),v.end());
    for(int i=0;i<q;i++){
        cin>>x;
        cout<<upper_bound(v.begin(),v.end(),x)-v.begin()<<'\n';
    }



    return 0;
}
