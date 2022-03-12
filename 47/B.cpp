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
    char arr[3][3];
    int sumA=0,sumB=0,sumC=0;
    for(int i=0;i<3;i++)
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    for(int i=0;i<3;i++){
        if(arr[i][0]=='A' && arr[i][1]=='>')
            sumA++;
        else if(arr[i][0]=='B' && arr[i][1]=='>')
            sumB++;
        else if(arr[i][0]=='C' && arr[i][1]=='>')
            sumC++;
        else if(arr[i][2]=='A' && arr[i][1]=='<')
            sumA++;
        else if(arr[i][2]=='B' && arr[i][1]=='<')
            sumB++;
        else if(arr[i][2]=='C' && arr[i][1]=='<')
            sumC++;
    }
    if(max(sumA,max(sumB,sumC))!=2)
        cout<<"Impossible";
    else{
        if(sumA==2 && sumB==1)
            cout<<"CBA";
        else if(sumA==2 && sumC==1)
            cout<<"BCA";
        else if(sumB==2 && sumA==1)
            cout<<"CAB";
        else if(sumB==2 && sumC==1)
            cout<<"ACB";
        else if(sumC==2 && sumA==1)
            cout<<"BAC";
        else
            cout<<"ABC";
    }

    return 0;
}




