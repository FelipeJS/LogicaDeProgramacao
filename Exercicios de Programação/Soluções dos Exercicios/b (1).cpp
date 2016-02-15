#include<bits/stdc++.h>
using namespace std;
main()
{
	vector<int> v(4);
	for(int i = 0; i < 4; i++)
		cin >> v[i];
	sort(v.begin(),v.end());
	
	bool ok = 0;
	for(int i = 0; i < 4; i++)
		for(int j = i+1; j < 4; j++)
			for(int k = j+1; k < 4; k++)
				if(v[i]+v[j] > v[k])
					ok = 1;
	if(ok)
		cout << "S\n";
	else
		cout << "N\n";
}
