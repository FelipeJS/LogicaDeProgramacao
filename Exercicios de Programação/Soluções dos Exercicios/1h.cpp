#include<bits/stdc++.h>
using namespace std;
long long solve(list<long long>l, bool back,int w)
{
	long long danielsum = 0;
	long long weltinmaromba = 0;
	if(back)
	{
		weltinmaromba = l.back();
		danielsum = abs(l.back()-w);
		l.pop_back();
		back = 0;
	}
	else
	{
		weltinmaromba = l.front();	
		danielsum = abs(l.front()-w);
		l.pop_front();
		back = 1;
	}
	while(!l.empty())
	{
		if(back)
		{
			danielsum += max(abs(l.back()-w),abs(l.back()-weltinmaromba));		
			weltinmaromba = l.back();
			back = 0;
			l.pop_back();
		}
		else
		{
			danielsum += max(abs(l.front()-w),abs(l.front()-weltinmaromba));
			weltinmaromba = l.front();
			back = 1;
			l.pop_front();
		}
	}
	return danielsum;
}
main()
{
	int n,w;
	cin >> n >> w;
	list<long long>l,l1;
	for(int i = 0; i < n; i++)
	{
		long long a;
		cin >> a;
		l.push_back(a);
		l1.push_back(a);
	}
	l.push_back(w);
	l.sort();
	l1.sort();
	long long senhormiagui = 0;
	list<long long>::iterator it  = l.begin();
	long long ant = *it ;
	it++;
	for(; it != l.end(); it++)
	{
		senhormiagui += (*it - ant) ;	
		ant = *it;
	}
	cout << senhormiagui << ' ';
	cout << max(solve(l1,0,w),solve(l1,1,w)) << '\n';
}
