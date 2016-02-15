#include<bits/stdc++.h>
using namespace std;
main()
{
	int m,n,a;
	while(cin >>m >> n >> a)
	{
	if(m+n+a != 180)
		cout << "Error\n";
	else if(m == n && n == a && a == m && m == 60)
		cout << "Equilateral\n";
	else if(m ==n || a == n || a == m)
		cout << "Isosceles\n";
	else
		cout << "Scalene\n";
	}

}
