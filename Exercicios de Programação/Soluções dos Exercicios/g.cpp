#include<bits/stdc++.h>
using namespace std;
map<char,int>m;
main()
{
	m['S'] = 1;
	m['M'] = 2;
	m['L'] = 3;
	int j,a;
	cin >> j >> a;
	int k[j+1];
	int l;
	char c;
	int usado[j+1];
	for(int i = 1; i <= j; i++)
		usado[i] = 0;
	for(int i = 1; i <= j; i++)
	{
		cin >> c;
		k[i] = m[c];
	}
	int ans = 0;
	for(int i = 0; i < a; i++)
	{
		cin >> c >> l;
		if(!usado[l])
		{
			if(k[l] >= m[c])
			{		
				ans++;
				usado[l] = 1;
			}
		}
		
	}
	cout << ans << '\n';
}
