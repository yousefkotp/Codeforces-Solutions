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



int main()
{
    int n,sum=0;
    int m,counter =0;;
    cin>>n>>m;
    pair< int,int>p[m];
    for(int i=0;i<m;i++)
        cin>>p[i].second>>p[i].first;
    sort(p,p+m);
    reverse(p,p+m);

    for(int i=0;i<n && counter<m;i++){

        while(p[counter].second >0 ){
            sum += p[counter].first;
            p[counter].second--;
            i++;
            if(i==n)
                break;
            if(counter ==m)
                break;
        }
        i--;
        counter++;
    }
    cout<<sum;
    return 0;
}




