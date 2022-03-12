#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;

bool sortByMe(pair<int,int>x,pair<int,int>y){
    if(x.first==y.first)
        return x.second<y.second;
    return x.first>y.first;

}
int main()
{   io;
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i].first>>v[i].second;
    vector<int>counters;
    sort(v.begin(),v.end(),sortByMe);
    for(int i=0;i<n;i++){
        int counter=1;
        if(i<n-1){
            while(v[i].first==v[i+1].first && v[i].second == v[i+1].second){
                i++;
                counter++;
            }
        }
        counters.push_back(counter);
    }
    
    int sum=0;
    for(int i=0;i<counters.size();i++){
        sum+=counters[i];
        if(sum>=k){
            cout<<counters[i];
            return 0;
        }
    }
    return 0;
}
