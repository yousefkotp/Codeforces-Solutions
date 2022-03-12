#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    pair<int,int> p[n];
    p[0].first = arr[1]-arr[0];
    p[0].second = arr[n-1]-arr[0];
    for(int i=1;i<n-1;i++){
        p[i].first = min(abs(arr[i]-arr[i-1]),abs(arr[i+1]-arr[i]));
        p[i].second = max(abs(arr[n-1]-arr[i]),abs(arr[i]-arr[0]));
    }
    p[n-1].first= arr[n-1]-arr[n-2];
    p[n-1].second = arr[n-1]-arr[0];
    for(int i=0;i<n;i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    return 0;
}
