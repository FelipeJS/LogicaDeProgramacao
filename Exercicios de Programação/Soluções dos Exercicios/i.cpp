#include<bits/stdc++.h>
using namespace std;
int mat[19][19] ;
int dp[18][1<<18] ;
int n,m;
int solve(int at, int mask)
{
	if(at >= n - 1)
		return 180000 ;
	int &ans = dp[at][mask];
	if(ans != -1)
		return ans;
	ans = 0;
	int cont = 0 ;
	for(int i = 0 ; i < n; i++)
	{
		if( mat[at][i]  && !(mask & (1 << i)))
		{
			ans = max(ans, solve(i,mask|(1 << i))+mat[at][i]);
		}
		else
			cont++ ;
	}
	if(cont == n)
		return -100000000 ;
	return ans;
}
main()
{
	memset(dp,-1,sizeof(dp));
	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		int a,b;
		cin >> a >> b;
		cin >> mat[a][b];
	}
	cout << solve(0,1) - 180000 << '\n';

}
