#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define loop for(int i=0;i<n;i++)
#include<numeric> for C++17
using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int> s;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int index=0,sum=0;
    if(n==1)
        cout<<1;
    else{
        int num;
        for(int i=0;i<n;i++){
            int sumL=1,sumR=0;
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1])
                    break;
                else
                    sumL++;
            }
            for(int k=i;k<n-1;k++){
                if(arr[k+1]>arr[k])
                    break;
                else
                    sumR++;
            }
            s.push_back(sumL+sumR);
        }
        int m=-1;
        for(int i=0;i<s.size();i++)
            if(s[i]>m)
                m=s[i];
        cout<<m;


    }



    return 0;
}
