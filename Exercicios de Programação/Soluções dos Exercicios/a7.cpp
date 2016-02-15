#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >adj(50005);
int pai[50005];
int nivel[50005];
int ancestral[50005][17];
int n;
vector<pair<int,int> >v(25005);
void dfs(int at)
{
	for(int i = 0; i < adj[at].size(); i++)
	{
		int u = adj[at][i];
		if(!nivel[u])
		{
			pai[u] = at;
			nivel[u] = nivel[at]+1;
			dfs(u);
		}
	}
}

int lca(int u, int v){
    
    if(nivel[u] < nivel[v]) swap(u, v);
    
    for(int i = 16;i >= 0;i--)
        if(nivel[u] - (1<<i) >= nivel[v])
            u = ancestral[u][i];
    
    if(u == v) return u;
    
    for(int i = 16;i >= 0;i--)
        if(ancestral[u][i] != -1 && ancestral[u][i] != ancestral[v][i]){
            u = ancestral[u][i];
            v = ancestral[v][i];
        }
            
    return pai[u];
}
main()
{
	memset(ancestral,-1,sizeof(ancestral));
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if(!v[a].first)
			v[a].first = i+1;
		else if(!v[a].second)
			v[a].second = i+1;
	}
	for(int i = 0; i < n-1; i++)
	{
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	nivel[1] = 0;
	dfs(1);
	for(int i = 1; i <= n; i++)
		ancestral[i][0] = pai[i];

	for(int j = 1; j <= 16; j++)
		for(int i = 1; i <= n; i++)
			ancestral[i][j] = ancestral[ancestral[i][j-1]][j-1];

		long long ans = 0LL;
		for(int i = 1; i <= n/2; i++)
		{
			ans += (long long)(nivel[v[i].first] + nivel[v[i].second] - 2*nivel[lca(v[i].first,v[i].second)]);
		}
		cout << ans << '\n';
}
