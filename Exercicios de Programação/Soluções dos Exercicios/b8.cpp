#include<bits/stdc++.h>
using namespace std;
int n,c;
int dp[200005][2];
int v[200005];
int solve(int pos, int a)
{
	if(pos == n)
		return 0;
	int &ans = dp[pos][a];
	if(ans != -1)
		return ans;
	if(!a)
	{
		ans = solve(pos+1,0);
		ans = max(ans,solve(pos+1,1)-v[pos]-c);
	}
	else
	{
		ans = solve(pos+1,1);
		ans = max(ans,solve(pos+1,0)+v[pos]);
	}
	return ans;
}
main()
{
	memset(dp,-1,sizeof(dp));
	cin >> n >> c;
	for(int i = 0; i < n; i++)
		cin >> v[i];
	cout << solve(0,0) << '\n';
}
