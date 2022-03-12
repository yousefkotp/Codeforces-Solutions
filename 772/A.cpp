#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
const int N=1e5+5;
const double eps=1e-4;//Precision
int n,p;
int a[N],b[N];
int check(double mid)
{
    double E=mid*p; 
    for(int i=0;i<n;i++)
    {
        double e=b[i]-a[i]*mid;
        if(e<0)E+=e;
        if(E<0)return 0;//If the energy of the power bank is not enough to supply, the mid is too large
    }
    return 1;//Otherwise mid is too small
}
int main()
{
    cin>>n>>p;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sum+=a[i];
    }
    if(sum<=p)
    {
        cout<<-1<<endl;
        return 0;
    }
    double low=0,high=1e18;
    double mid;
    while(high-low>=eps)//The dichotomy on the real number field cannot be 0, it can only be controlled by precision
    {
        mid=(high+low)/2;
        if(check(mid))low=mid;
        else high=mid;
    } 
    cout<<mid<<endl;
    return 0;
}