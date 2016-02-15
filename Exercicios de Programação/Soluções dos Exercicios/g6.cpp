#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
main()
{
	int n;
	cin >> n;
	string s;
	for(int i = 0; i < n; i++)
	{
		cin >> s;
		if(s.size() > 2)
			sort(s.begin()+1,s.end()-1);
		m[s] += 1;
	}
	int k;
	cin >> k;
	cin.ignore();
	int si = s.size();
	for(int i = 0; i < k; i++)
	{
		getline(cin,s);
		unsigned int ans = 1;
		istringstream iss(s);
		string aux;
		while(iss >> aux)
		{
			if(aux.size() > 2)
				sort(aux.begin()+1,aux.end()-1);
			ans *= m[aux];
		}
		cout << ans << '\n';
	}

}
