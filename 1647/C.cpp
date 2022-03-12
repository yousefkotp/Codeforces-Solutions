#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
#define endl '\n'
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define approx(x) cout<<fixed<<setprecision(x);
using namespace std;
const int N= 2e5+5; //max number
int sieve[1000001];

void generate_sieve()
{
    for(long long i=3; i<1000001; i+=2)
        sieve[i]=i;

    for(long long i=3; i<1000001; i+=2)
        if(sieve[i]==i)
            for(long long j=i*i; j<1000001; j+=i)
                sieve[j]=0;

    sieve[2]=2;
    sieve[1]=0;//return it to 0

}

int main()
{
    io;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag =false;
        if(v[0][0]=='1')
            flag =true;
        if(flag){
            cout<<-1<<endl;
            continue;
        }
        vector<pair<pair<int,int>,pair<int,int>>>ans;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(v[i][j]=='1'){
                    if(i>0){
                        ans.push_back(make_pair(make_pair(i,i+1),make_pair(j+1,j+1)));
                    }else if(j>0){
                        ans.push_back(make_pair(make_pair(i+1,i+1),make_pair(j,j+1)));
                    }
                }
            }
        }
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i.first.first<<" "<<i.second.first<<" ";
            cout<<i.first.second<<" "<<i.second.second<<endl;
        }

    }
    return 0;
}
