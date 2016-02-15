#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,m;
	cin >> n >> m;
	vector<int>v(m);
	for(int i = 0; i < m; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	int sum = 0;
	int i;
	for(i = 0; i < m; i++)
	{
		sum += v[i];
		if(sum >= n)
			break;
	}
	if(i < m)
		cout << i+1 << '\n';
	else
		cout << "Impossivel\n";
}
