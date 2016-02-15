#include<bits/stdc++.h>
using namespace std;
int fat[10];
void init()
{
	for(int i = 8; i > 0; i--)
	{
		fat[i] = 1;
		for(int j = i; j > 0; j--)
		{
			fat[i] *= j;
		}
	}
}
main()
{
	int n;
	cin >> n;
	int cont = 0;
	int i;
	init();
	for(i = 1; i <= 8; i++)
	{
		if(n < fat[i])
		{
			break;
		}
	}
	i--;
	int sum = 0;
	for(int j = i; j > 0; j--)
	{
		 while(sum+fat[j] <= n)
		 {
		 	sum += fat[j];
			cont++;
		 }
	}
	cout << cont << '\n';
}
