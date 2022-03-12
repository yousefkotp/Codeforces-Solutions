#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int l=n;
    set <int>s;
    vector<int>v;
set<int>::reverse_iterator it;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){

        if(arr[i]>=l){
            l--;
            cout<<arr[i]<<" ";
            int x = arr[i];
            for(it = s.rbegin();it!=s.rend();it++){
                if(x-*it==1){
                    x--;
                    cout<<*it<<" ";
                    l--;
                    v.push_back(*it);
                }else{
                    break;
                }
            }
            for(int i=0;i<v.size();i++)
                s.erase(v[i]);
            v.clear();
        }else{
            s.insert(arr[i]);
        }
        if(i==n-1){
            for(it =s.rbegin();it!=s.rend();it++)
                cout<<*it<<" ";
        }else{
            cout<<endl;
        }

    }

    return 0;
}
