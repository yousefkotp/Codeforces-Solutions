#include <iostream>
#include <iostream>
#include <bits/stdc++.h>
#define B begin()
#define E end()
#define S size()
#define f first
#define s second
#define pb push_back
#define vi vector<int>
#define ll long long
#define ull unsigned long long
using namespace std;
 
int main()
{
    int n,index,sure=0;
    cin>>n>>index;
    vi v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int real=index-1;
    if(real>0)
    {
        int left=real-1,right=real+1;
        while(left>=0 && right<v.S)
        {
            if(v[left]==v[right] && v[right]==1)
                sure+=2;
            left--;
            right++;
 
        }
         for( int i =right;i<n;i++)
         {
            if(v[i]==1)
             sure++;
 
         }
         for(int i=left;i>=0;i--)
         {
             if(v[i]==1)
             sure++;
         }
         if(v[real]==1) sure++;
    }
 
   else if(real==0)
   {
       for(int i=0;i<n;i++)
       {
           if(v[i]==1)sure++;
       }
   }
 
    cout<<sure<<endl;
 
    return 0;
}