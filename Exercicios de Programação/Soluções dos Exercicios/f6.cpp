#include<bits/stdc++.h>
using namespace std;
int cor[2005];
int n;
vector<vector<int> >adj(2005);
inline int bfs()
{
	for(int i = 1; i <= n; i++)
	{
		if( cor[i] == -1 )
		{
			cor[i] = 1;
			queue<int> q ;
			q.push( i ) ;
			while( !q.empty() )
			{
				int	u = q.front() ;
				q.pop() ;
				for(int v = 0; v < adj[u].size(); v++)
				{
					if( cor[adj[u][v]] == -1 )
					{
					  cor[adj[u][v]] = 1 ^ cor[u] ;
					  q.push( adj[u][v] ) ;
					}
					else if( cor[u] == cor[adj[u][v]] )
						return false ;
				}
			}
		}
	}
	return true;
}
main()
{
	memset(cor,-1,sizeof(cor));
	int k;
	cin >> n >> k;
	for(int i = 0; i < k; i++)
	{
		int a,b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	if(!bfs())
		cout << "Besouro suspeito encontrado!\n";
	else
		cout << "Nenhum besouro suspeito encontrado!\n";
}
