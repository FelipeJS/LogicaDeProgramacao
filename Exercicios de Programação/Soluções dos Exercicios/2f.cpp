#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int A=100,D=100;
    int a,d;

    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a >> d;

        if(a<d)
            A -= d;
        else if(a>d)
            D -= a;
    }

    cout << A << endl << D << endl;

}
