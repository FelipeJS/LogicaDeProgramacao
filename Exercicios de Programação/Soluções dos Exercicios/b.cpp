#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	getline(cin,s);
	int h = 0;
	int sa = 0;
	for(int i = 0; s[i] != 0; i++)
	{
		if(s[i] == ':' && s[i+1] == '-' && s[i+2] == ')')
			h++;
		if(s[i] == ':' && s[i+1] == '-' && s[i+2] == '(')
			sa++;
	}
	if(h > sa) 
		cout << "happy\n";
	else if(sa > h)
		cout << "sad\n";
	else if(sa == h && sa != 0 && h != 0)
		cout << "unsure\n";
	else
		cout << "none\n";
}
