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
    int n,l;
    cin>>n;
    l=n;
    while(n!=0){
        while(l%n!=0 ){
            n--;
        }
        l=n;
        cout<<n<<" ";
        n/=2;

    }
    return 0;
}
