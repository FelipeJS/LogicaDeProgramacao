#include<bits/stdc++.h>
using namespace std;
int n,k;
bool m[101][101];
double barrels[101];
vector<int>v;
map<int,int>vis;
void dfs(int x)
{
	if(vis[x])
		return;
	vis[x] = 1;
	for(int i = 1; i <= n; i++)
	{
		if(m[x][i] && !vis[i])
		{
			v.push_back(i);
			dfs(i);
		}
	}
}
main()
{
	cin >> n >> k;
	char op;
	int a,b;
	int overflow = 0;
	int p;
	for(int j = 1; j <= k; j++)
	{
		cin >> op >> a >> b;
		v.clear();
		vis.clear();
		if(op == 'P')
		{
			
			dfs(a);
			v.push_back(a);
			barrels[a] += b;
			double sum = 0.0;
			for(int i = 0; i < v.size(); i++)sum += barrels[v[i]];
			for(int i = 0; i < v.size(); i++)barrels[v[i]] = sum/(double)v.size();
		}
		else
		{
			if(!m[a][b])
			{
				m[a][b] = m[b][a] = 1;
				dfs(a);
				v.push_back(a);
				double sum = 0.0;
				for(int i = 0; i < v.size(); i++)sum += barrels[v[i]];
				for(int i = 0; i < v.size(); i++)barrels[v[i]] = sum/(double)v.size();
			}
			else
			{
				m[b][a] = m[a][b] = 0;
			}
		}
		if(!overflow && overflow != -1)
		{
			for(int i = 1; i <= n; i++)
			{
				if(fabs(barrels[i]) > 100.001)
				{
					p = j;
					overflow  = 1;
					break;
				}
			}
		}
	}
		
		if(overflow && overflow != -1)
		{
			cout << "OVERFLOW " << p << '\n';
			overflow = -1;
		}
		else
		{
		double maior = 0;
		double menor = barrels[1];
		for(int i = 1; i <= n; i++)
		{
			maior = max(maior,barrels[i]);
			menor = min(menor,barrels[i]);
		}
	cout << "OK " <<fixed << setprecision(2) <<  menor << " "<< maior << '\n';	
		}
}
