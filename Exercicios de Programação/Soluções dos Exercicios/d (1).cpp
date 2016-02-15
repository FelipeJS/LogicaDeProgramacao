#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
main()
{
	int n;
	cin >> n;
	vector<pair<char,int> >v(n);
	for(int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;
	}
	for(int i = 0; i < n; i++)
	{
		bool ok = 0;
		if(v[i].first == 'R')
		{
			for(int j = i+1; j < n; j++)
			{		
					if(v[j].first == 'W')
						m[v[i].second] += v[j].second-1;
					else if(v[j].first == 'S' && v[j].second == v[i].second)
					{
						m[v[i].second]++;	
						ok = 1;
						break;
					}
					else
					{
						m[v[i].second]++;	
					}
			}
			if(!ok)
				m[v[i].second] = 0;
		}
	}
		for(map<int,int>::iterator it = m.begin(); it != m.end(); it++)
		{
			cout << it->first << " " << (it->second? it->second : -1) << '\n';
		}
	
	
}
