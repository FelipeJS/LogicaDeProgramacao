#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,b;
	cin >> a >> b;
	if(a == b)
		cout << a << '\n';
	else
		cout << max(a,b) << '\n';

}
