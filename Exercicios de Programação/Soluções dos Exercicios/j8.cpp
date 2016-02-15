#include<bits/stdc++.h>
using namespace std;
main()
{
	int j,r;
	cin >> j >> r;
	int v[j+1];
	memset(v,0,sizeof(v));
	int cont = 0;
	for(int i = 0; i < j*r ; i++)
	{
		int a;
		cin >> a;
		cont++;
		v[cont] += a; 
		if(cont == j)
		{
			cont = 0;
		}
	}
	int maior = 0;
	int a;
	for(int i = 1; i <= j; i++)
	{
		if(v[i] >= maior)
		{
			a = i;
			maior = v[i];
		}
	}
	cout << a << '\n';

}
