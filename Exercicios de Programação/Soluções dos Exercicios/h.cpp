#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	while(cin >> n)
	{
	vector<string>v1(n);
	vector<string>v2(n);
	for(int i = 0; i < n; i++)
		cin >> v1[i];
	for(int i = 0; i < n; i++)
		cin >> v2[i];
	string aux,aux2;
	bool ok = 0,print = 1;
	for(int i = 0; i < n; i++)
	{
		ok = 0;
		aux = v1[i];
		aux2 = v2[i];
		for(int j = 0; j < n; j++)
		{
			if((aux == v2[j] && v1[j] == v2[i]) || (aux2 == v1[j] && v2[j] == v1[i]))
				ok = 1;
		}
		if(!ok || v1[i] == v2[i])
		{
			print = 0;
			cout << "bad\n";
			break;
		}
	}
	if(print)
		cout << "good\n";
	}
}
