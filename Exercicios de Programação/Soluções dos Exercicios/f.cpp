#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	cin >> n;
	stack<int> st;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if(a == 0)
			st.pop();
		else
			st.push(a);
	}
	int sum = 0;
	while(!st.empty())
	{
		sum += st.top();
		st.pop();
	}
	cout << sum << '\n';



}
