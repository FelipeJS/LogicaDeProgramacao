#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V,A=0,B=0;
    char in;

    cin >> V;

    for(int i=0;i<V;i++)
    {
        cin >> in;
        if( in == 'A')
            A++;
        else if(in == 'B')
            B++;
    }

    if(A == B)
        cout << "Tie" << endl;
    else if(A > B)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}
