#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	int n;
	cin >> n;
	cin >> s;
		int a = 0;
		int b = 0;
		for(int i = 0 ; s[i] != 0; i++)
		{
			if(s[i] == 'A')
				a++;
			else if(s[i] == 'B')
				b++;
		}
		if(b > a)
			 cout << "B\n";
		else if( a > b)
			cout << "A\n";
		else
			cout << "Tie\n";
	
	





}
