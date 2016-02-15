#include <bits/stdc++.h>
using namespace std;

const int maxx = 250;
int ways[251][251][251]= { {0} };

int numberWays(int pieces,int people, int minimun)
{
    if(ways[pieces][people][minimun] == 0)
    {
        if(pieces==people) ways[pieces][people][minimun] = 1;
        else if(people==1) ways[pieces][people][minimun] = 1;
        else
            for(int i=minimun;i<=pieces/people;i++)
                ways[pieces][people][minimun] += numberWays(pieces-i,people-1,i);;
    }

    return ways[pieces][people][minimun];
}

int main()
{
    int pieces,people;
    cin >> pieces >> people;

    cout << numberWays(pieces,people,1) << endl;
}
