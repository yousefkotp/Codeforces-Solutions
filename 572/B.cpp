#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <string.h>
#define endl '\n'
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define approx(x) cout<<fixed<<setprecision(x);
using namespace std;
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
    sieve[1]=0;

}
const int maxn = 2e5 + 10;

int main()
{
    io;
    int n,s;
    cin>>n>>s;
    map<int,int>buy;
    map<int,int>sell;
    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        int x,y;
        cin>>x>>y;
        if(a=='B'){
            buy[x]+=y;
        }else{
            sell[x]+=y;
        }
    }
    vector<pair<int,int>>b;
    vector<pair<int,int>>se;

    map<int,int>::iterator it = buy.begin();
    while(it!=buy.end()){
        b.push_back(make_pair(it->first,it->second));
        it++;
    }

    it = sell.begin();
    while(it!=sell.end()){
        se.push_back(make_pair(it->first,it->second));
        it++;
    }

    sort(b.rbegin(),b.rend());
    sort(se.begin(),se.end());
    int j=s-1;
    while(j>=0){
        if(j<se.size())
            cout<<"S "<<se[j].first<< " "<<se[j].second<<endl;
        j--;
    }

    for(int i=0;i<s && i<b.size();i++)
        cout<<"B "<<b[i].first<<" "<<b[i].second<<endl;
    return 0;
}
