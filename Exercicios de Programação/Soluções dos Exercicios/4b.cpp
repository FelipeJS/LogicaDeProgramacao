#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	while(cin >> n && n != -1)
	{
		int sum = 0;
		int v[n];
		for(int i = 0; i < n; i++)
		{
			cin >> v[i];
			sum += v[i];
		}
		int ans = 0;
		if(sum % n != 0)
			cout << "-1\n";
		else
		{
			int aux = sum/n;
			for(int i = 0; i < n; i++)
			{
				if(v[i] < aux)
				{
					ans += (aux)-v[i];
				}
			}
			cout  << ans << '\n';
		}
	}


}
