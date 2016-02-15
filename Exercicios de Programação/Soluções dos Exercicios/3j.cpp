#include<bits/stdc++.h>
using namespace std;
bool primo[int(1e6+1)];
main()
{
	primo[1] = 1;
	for(int i = 2; i <= 1e6; i++)
	{
		if(!primo[i])
		{
			for(int j = 2; i*j <= 1e6; j++)
			{
				primo[i*j] = 1;
			}
		}
	}
	int n;
	while(cin >> n && n)
	{
		for(int i = 2; i <= n; i++)
		{
			if(!primo[i] && !primo[n-i])
			{
				cout << n << " = " << i << " + " << n-i << '\n';
				break;
			}
		}
	}
}
