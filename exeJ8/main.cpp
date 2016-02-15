#include <iostream>

using namespace std;

int main()
{
    int qntJogadores, qntRodadas, pontos;
    cin >> qntJogadores >> qntRodadas;
    int tabela[qntJogadores+1];

    for(int i = 1; i <= qntJogadores; i++)
        tabela[i] = 0;

    for(int i = 0; i < qntRodadas; i++){
        for(int j = 1; j <= qntJogadores; j++){
            cin >> pontos;
            tabela[j] += pontos;
        }
    }

    int maior = tabela[1];
    int resultado = 1;
    for(int i = 2; i <= qntJogadores; i++){
        for(int j = i-1; j > 0; j--){
            if(tabela[i] >= tabela[j] && tabela[i] >= maior){
                resultado = i;
                maior = tabela[i];
            }
        }
    }

    cout << resultado << endl;
    return 0;
}
