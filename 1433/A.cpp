#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int sum = ((x%10)-1)*10;
        int n=0,sum2;
        while(x!=0){
            n++;
            x/=10;
        }
        if(n==1)
            sum2=1;
        if(n==2)
            sum2=3;
        if(n==3)
            sum2=6;
        if(n==4)
            sum2=10;
        cout<<sum+sum2<<endl;
    }
    return 0;
}
