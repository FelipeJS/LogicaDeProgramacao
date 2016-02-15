#include<bits/stdc++.h>
using namespace std;
int rep[1005];
void init(int n)
{
	for(int i = 1; i <= n; i++)
		rep[i] = i;
}
int find(int x)
{
	return rep[x] = (rep[x] == x ? x : find(rep[x]));
}
void unio(int x, int y)
{
	rep[find(x)] = rep[find(y)];
}
main()
{
	int n,m;
	cin >> n >> m;
	init(n);
	vector<vector<int> >v(n+1);
	set<int> ans;
	for(int i = 0; i < m; i++)
	{
		char a; int b,c;
		cin >> a >> b >> c;
		if(a == 'F')
		{
			unio(b,c);
		}
		else
		{
			v[b].push_back(c);
			for(int i = 0; i < v[b].size(); i++)
			{
				unio(c,v[b][i]);
			}
			v[c].push_back(b);
			for(int i = 0; i < v[c].size(); i++)
			{
				unio(b,v[c][i]);
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		ans.insert(find(i));
	}
	cout << ans.size() << '\n';
}
