#include<bits/stdc++.h>
using namespace std;
int v[1000];
int dp[333333][3];
int n;
int solve(int pos, int tam)
{
	if(pos == n)
		return 0;
	if(dp[pos][tam])
		return dp[pos][tam];
	int ans = 0;
	if(tam < 2)
	{
		ans = max(solve(pos+1,tam+1)+v[pos],ans);
	}
	ans = max(solve(pos+1,0),ans);
	return dp[pos][tam] = ans;
}
main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> v[i];
	cout << solve(0,0) << '\n'; 
}
