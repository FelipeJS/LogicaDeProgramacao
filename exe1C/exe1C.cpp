#include <iostream>

using namespace std;

int main()
{
    string palavra;
    cin >> palavra;

    for(int i = 0; i < palavra.length(); i++){
        palavra[i] == 'b'? cout << "bac":
        palavra[i] == 'c'? cout << "cad":
        palavra[i] == 'd'? cout << "def":
        palavra[i] == 'f'? cout << "feg":
        palavra[i] == 'g'? cout << "geh":
        palavra[i] == 'h'? cout << "hij":
        palavra[i] == 'j'? cout << "jik":
        palavra[i] == 'k'? cout << "kil":
        palavra[i] == 'l'? cout << "lim":
        palavra[i] == 'm'? cout << "mon":
        palavra[i] == 'n'? cout << "nop":
        palavra[i] == 'p'? cout << "poq":
        palavra[i] == 'q'? cout << "qor":
        palavra[i] == 'r'? cout << "ros":
        palavra[i] == 's'? cout << "sut":
        palavra[i] == 't'? cout << "tuv":
        palavra[i] == 'v'? cout << "vuw":
        palavra[i] == 'w'? cout << "wux":
        palavra[i] == 'x'? cout << "xuy":
        palavra[i] == 'y'? cout << "yuz":
        palavra[i] == 'z'? cout << "zuz":
        cout << palavra[i];
    }
    return 0;
}
