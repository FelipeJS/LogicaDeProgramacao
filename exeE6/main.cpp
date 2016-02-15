#include <iostream>
using namespace std;

int main()
{
    string palavra[200][2];
    int qntDePalavras, linha, coluna, posicao, linhaComparada, colunaComparada, contaResultado;

    cin >> qntDePalavras;
    string resultado[qntDePalavras*2];

    for(int i = 0; i < qntDePalavras*2; i++){
        resultado[i] = "X";
    }

    contaResultado = 0; linha = 0;
    while(contaResultado < qntDePalavras){
        coluna = 0;
        cin >> palavra[linha][coluna];
        coluna++;
        cin >> palavra[i][j];
        coluna--;

        colunaComparada = 1;
        if(linha > 0){
            for(linhaComparada = linha-1; linhaComparada > 0; linhaComparada--){
                    if(palavra[linha][coluna] == palavra[linhaComparada][colunaComparada]){
                        for(int i = 0; i < qntDePalavras*2; i++){
                            if(resultado[i] == palavra[linha][coluna]){
                                resultado[i] = palavra[linha][coluna];
                                resultado
                            }
                        }
                    }
                }
            }

        linha++;
    }

    return 0;
}
