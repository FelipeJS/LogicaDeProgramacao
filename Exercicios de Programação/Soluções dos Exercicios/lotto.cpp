#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	for(int i = 0; cin >> n && n; i++)
	{
		if(i > 0)cout << '\n';
		vector<int> v(n);
		for ( int i = 0 ; i < n ; i++ ) cin >> v[i];
		sort(v.begin(), v.end());
		vector<bool> mark(n, false);
		for ( int i = 0 ; i < 6 ; i++ )
			mark[i] = true;

		do
		{
			int i;
			for ( i = 0 ; i < n ; i++ )
			{
				if ( mark[i] )
					break;
			}

			cout << v[i];
			i++;
			for ( ; i < n ; i++ )
				if ( mark[i] )
					cout << " " << v[i];
			cout << "\n";
		}while ( prev_permutation(mark.begin(), mark.end()) );
	}
}
