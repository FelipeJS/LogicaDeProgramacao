#include<bits/stdc++.h>
using namespace std;
int dist[10005][2];
int vis[10005];
main()
{
	memset(dist,0x3f3f3f,sizeof(dist));
	int c,v;
	cin >> c >> v;
	vector<vector<pair<int,int> > >grafo(c+1);
	for(int i = 0; i < v; i++)
	{
		int a,b,c;
		cin >> a >> b >> c;
		grafo[a].push_back(make_pair(b,c));
		grafo[b].push_back(make_pair(a,c));
	}
	priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
		pq.push(make_pair(0,make_pair( 1,0)));	
		dist[1][0] =  dist[1][1] = 0;
		int ans = (1 << 30);

		while(!pq.empty())
		{
			pair< int, pair<int,int> > at = pq.top();
			pq.pop();
			for(int i = 0; i < grafo[at.second.first].size(); i++)
			{
					if(dist[grafo[at.second.first][i].first][(at.second.second+1)&1] > dist[at.second.first][at.second.second & 1] + grafo[at.second.first][i].second)
					{
						dist[ grafo[at.second.first][i].first ][(at.second.second+1) & 1] = dist[at.second.first][at.second.second & 1] + grafo[at.second.first][i].second;
						pq.push(make_pair(dist[grafo[at.second.first][i].first][(at.second.second+1) & 1],make_pair(grafo[at.second.first][i].first,at.second.second+1)));
					}
	//			}
			}
		}
		if(dist[c][0] != dist[0][0])
			cout << dist[c][0] << '\n';
		else
			cout << "-1\n";
}
