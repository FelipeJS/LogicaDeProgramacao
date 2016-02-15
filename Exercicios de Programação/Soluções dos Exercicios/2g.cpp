#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K,m,rm;
    list<int> amigos;
    list<int>::iterator iterator;

    cin >> K >> m;

    //construindo lista de amigos
    for(int i=1;i<=K;i++)
        amigos.push_back(i);

    for(int i=0;i<m;i++)
    {
        cin >> rm;

        iterator = amigos.begin();
        advance(iterator,rm-1);
        *iterator = -1;

        for(int j=2;(j)*rm <= amigos.size();j++)
        {
            advance(iterator,rm);
            *iterator = -1;
        }

        //modificar esta porra:
        amigos.remove( -1 );
    }

    for( iterator = amigos.begin(); iterator != amigos.end(); ++iterator)
		cout << *iterator << endl;
}
