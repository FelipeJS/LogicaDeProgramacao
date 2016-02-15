#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin >> n;
	int p1 = 100, p2 = 100;
	int a,b;
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if(a == b)
			continue;
		else if(a > b)
			p2 -= a;
		else if(b > a)
			p1 -= b;
	}
	cout << p1 << "\n" << p2 << '\n';



}
