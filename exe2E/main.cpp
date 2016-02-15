#include <iostream>

using namespace std;

int main()
{
    int A = 0, B = 0, qnt;
    string voto;
    cin>>qnt>>voto;

    for(int i = 0; i < qnt; i++)
        voto[i] == 'A'? A++:B++;

    B>A?cout<<"B"<<endl:
    A>B?cout<<"A"<<endl:
    cout<<"Tie"<<endl;
    return 0;
}
