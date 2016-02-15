#include <iostream>

using namespace std;

int main()
{
    int cartaUM, cartaDois, cartaTres;

    cin >> cartaUM >> cartaDois;

    cartaUM >= cartaDois ? cartaTres = cartaUM :
    cartaTres = cartaDois;

    cout << cartaTres << endl;
    return 0;
}
