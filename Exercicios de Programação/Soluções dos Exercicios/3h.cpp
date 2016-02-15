#include<bits/stdc++.h>
using namespace std;
main()
{

	long double n,p,a,b;
	while(cin >> n >> p && n+p!= 0)
	{
		a = b = 1;
		for(int i = n; i >  max(p,n-p); i--)
			a *= i;

		for(int i = 2; i <= min(p,n-p); i++)
			b *= i;
		cout <<fixed <<setprecision(0) << a/b << '\n';

	}


}
