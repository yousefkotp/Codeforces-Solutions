#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#define sz(v)				((int)((v).size()))
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#include<numeric> for C++17
using namespace std;

int n, e;
vector<bool> visited;
vector< vector<int> > adj;
vector<int> topsort;

void dfs(int node)
{
	visited[node] = true;

	rep(i, adj[node])
	{
		int child = adj[node][i];
		if (!visited[child])	// To avoid cyclic behavior
			dfs(child);
	}

	topsort.push_back(node);	// Directed Acyclic Graph // Other way Indegree / Outdegree
}

int ConnectedComponenetsCnt()
{
	int cnt = 0;
	lp(i, n)
	{
		if(!visited[i])	// Then no one reach this isolated node yet and its neighbors.
		{
			dfs(i);
			cnt++;
		}
	}
	return cnt;
}

char middlechar(string str){
    if(str.size()%2==1){
        return str[str.size()-1/2];
    }else{
        return str[str.size()/2];
    }
}


int main()
{
    vector <char>l ={'G','B','I','V','R','O','Y'};

    string s = "ROYGBIV";
    vector<char>v;
    int n;
    cin>>n;
    int counter =0;
    lp(i,7){
        v.push_back(s[i]);
    }
    for(int i=7;i<n;i++){
        v.push_back(v[i-4]);

    }
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    return 0;
}




