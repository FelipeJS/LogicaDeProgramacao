#include<bits/stdc++.h>
using namespace std;
map<string,string>ant,prox;
main()
{
	int n;
	cin >> n;
	string s,t;
	set<string>ss;
	for(int i = 1; i < n; i++)
	{
		cin >> s >> t;
		ant[t] = s;
		prox[s] = t;
		ss.insert(t);
		ss.insert(s);
	}
	for(set<string>::iterator it = ss.begin(); it != ss.end(); it++)
	{
		if(ant[*it] == 	"")
		{
			cout << *it << '\n';
			s = *it;
			break;
		}
	}
	do
	{
		cout << prox[s] << '\n';
		s = prox[s];
	}while(prox[s] != "");	
}
