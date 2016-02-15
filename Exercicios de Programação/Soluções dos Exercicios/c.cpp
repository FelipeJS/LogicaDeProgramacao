#include<bits/stdc++.h>
using namespace std;
bool vogal(char a)
{
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
		return true;
	return false;
}
main()
{
	string s;
	cin >> s;
	vector<char>v;
	v.push_back('a');
	v.push_back('e');
	v.push_back('i');
	v.push_back('o');
	v.push_back('u');
		    //abcdefghijklmnopqrstuvwxyz
	char f[] = "aaaeeeeiiiiioooooouuuuuuuu";
	for(int i = 0; s[i] != 0; i++)
	{
		if(!vogal(s[i]))
		{
			cout << s[i];
			if(vogal(s[i-1]) && vogal(s[i+1]) && s[i] != 0 && s[i] != s.size()-1)
			{
				if(abs('a' - s[i-1]) < abs('a' - s[i+1]))
					cout << s[i-1];
				else
					cout << s[i+1];
			}
			else
			{
				cout << f[s[i]-'a'];
			}
			if(s[i] != 'z')
			{
				if(vogal(s[i]+1))
					cout << (char)(s[i]+2);
				else
					cout << (char)(s[i]+1);
			}
			else
				cout << s[i];
		}
		else
			cout << s[i];
	}
	cout << '\n';



}
