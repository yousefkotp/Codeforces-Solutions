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
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    int arr[n],arr2[m];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
        cin>>arr2[i];

    vector<pair<int,int>>v;

    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (arr2[j] < arr[i] - x)
        {
            ++j;
        }
        else if (arr2[j] > arr[i] + y)
        {
            ++i;
        }
        else
        {
            v.push_back(make_pair(++i,++j));
        }
    }
    cout<<v.size()<<'\n';
    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<'\n';
    return 0;
}
