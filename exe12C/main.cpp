#include <iostream>

using namespace std;

int main()
{
    int qnt;
    cin >> qnt;
    int resultado = 0;

    string letras;
    for(int i = 0; i < qnt; i++){
        cin >> letras;

        bool erro = false;
        for(int j = 1; j <= letras.length(); j++){
            if(letras[j] == 'D' && letras[j-1] == 'C')
                erro = true;
        }

        if(erro){
            resultado--;
        }
    }

    cout << qnt+resultado << endl;
    return 0;
}
