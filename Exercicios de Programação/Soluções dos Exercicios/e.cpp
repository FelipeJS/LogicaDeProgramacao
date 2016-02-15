#include<bits/stdc++.h>
using namespace std;
int p,c;
int dp[255][255][255];
int solve(int pos, int cake, int t)
{
	if(pos ==  p && cake == 0)
		return 1;
	if(cake == 0 || pos == p)
		return 0;
	int &ans = dp[pos][cake][t];
	if(ans != -1)
		return ans;
	ans = 0;
	for(int a = t; a <=  cake; a++)
	{
		ans += solve(pos+1, cake-a, a);
	}
	return ans;
}
main()
{
	cin >> c >> p;
	memset(dp,-1,sizeof(dp));
	cout << solve(0,c,1) << '\n';

}
