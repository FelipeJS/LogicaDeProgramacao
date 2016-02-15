#include <bits/stdc++.h>
using namespace std;

void printList( list<int> l)
{
	list<int>::iterator it = l.begin();
    for(int i=0 ; i < l.size()-1; i++)
    {
            cout << *it << " ";
            it++;
    }
    cout << *it << endl;
}

void subset(int array[], int escolhas, int left, int index, list<int> &l)
{
    if(left==0)
        printList(l);
    else
	    for(int i=index; i<escolhas; i++)
	    {
	        l.push_back(array[i]);
	        subset(array,escolhas,left-1,i+1,l);
	        l.pop_back();
	    }
}

int main()
{
	int k;
	int S[13];

	int count = 1;
	while( (cin >> k) && (k != 0) )
	{
		if(count > 1)
			cout << endl;
		for(int i=0; i<k; i++)
			cin >> S[i];

		list<int> l;
		subset(S,k,6,0,l);
		count++;
	}
}
