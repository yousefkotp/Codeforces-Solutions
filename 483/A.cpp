#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
#include<numeric> for C++17
using namespace std;

int main()
{
    int flag2=0;
    unsigned long long int l,r;
    cin>>l>>r;
    if(r-l <2)
        cout<<-1;
    else{
        unsigned long long int i;
        int flag =0;
        while(!flag && l<=r){
            for(i=l+2;i<=r;i++){
                if(__gcd(l,i)!=1 && __gcd(l+1,i)==1){
                    cout<<l<<" "<<l+1<<" "<<i;
                    flag =1;
                    flag2=1;
                    break;
                }
            }
            if(!flag)
                l++;
        }
        if(!flag2)
            cout<<-1;
    }



    return 0;
}
