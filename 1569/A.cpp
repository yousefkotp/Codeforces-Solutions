#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
using namespace std;
int n,c;
int arr[100000];


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        bool flag =false;
        int i=0,j=0,n;
        cin>>n;
        vector<char>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];

        for(i=0;i<n;i++){
            int suma=0,sumb=0;
            if(v[i]=='a')
                suma++;
            else
                sumb++;

            for(j=i+1;j<n;j++){
                if(v[j]=='a')
                    suma++;
                else if(v[j]=='b'){
                    sumb++;
                }


                if(suma == sumb){
                    flag =true;
                    break;
                }
            }
            if(flag){
                break;
            }

        }
        if(i==n || !flag)
            cout<<-1<<" "<<-1<<'\n';
        else
            cout<<i+1<<" "<<j+1<<'\n';



    }
    return 0;
}
