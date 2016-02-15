#include <bits/stdc++.h>
using namespace std;

int main(){
    int J, A;
    char *jerseysSizes = new char[1000001];   //cada posicao eh o tamanho do uniforme
    int satisfied=0;

    //declarando array 2d
    int **solicitedSizes = new int*[1000001];  //0 nao e 1 sim. tabela, colunas 0, 1 e 2 sao S,M,L respectivamente
    for(int i = 0; i < 1000001; ++i)
        solicitedSizes[i] = new int[3];

    //leitura de J e A
    cin >> J >> A;

    //inicializando solicitedSizes com zeros
    for(int j=1; j<=J; j++)
    {
        solicitedSizes[j][0] = 0;
        solicitedSizes[j][1] = 0;
        solicitedSizes[j][2] = 0;
    }

    //inicializando jerseysSizes com '0'
    for(int j=1; j<=J; j++)
    {
        jerseysSizes[j] = '0';
    }

    //leitura dos jerseys disponiveis
    for(int j=1; j<=J; j++)
    {
        char temp;
        cin >> temp;

        jerseysSizes[j] = temp;
    }

    //leitura das solicitacoes
    for(int a=1; a<=A; a++)
    {
        char jSize;
        int n;

        cin >> jSize >> n;

        switch(jSize){
            case 'L':
                solicitedSizes[n][2] = 1;
                break;

            case 'M':
                solicitedSizes[n][1] = 1;
                break;

            case 'S':
                solicitedSizes[n][0] = 1;
                break;
        }
    }

    //calculo
    //testa cada numero de uniforme para ver se foi solicitado no tamanho adequado
    for(int j=1;j<=J;j++)
    {
            switch(jerseysSizes[j])
            {
                case 'L':
                    if(solicitedSizes[j][2] == 1 || solicitedSizes[j][1] == 1 || solicitedSizes[j][0] == 1)
                    {
                        satisfied++;
                        solicitedSizes[j][2] = 0;
                        solicitedSizes[j][1] = 0;
                        solicitedSizes[j][0] = 0;
                    }
                    break;
                case 'M':
                    if(solicitedSizes[j][1] == 1 || solicitedSizes[j][0] == 1)
                    {
                        satisfied++;
                        solicitedSizes[j][2] = 0;
                        solicitedSizes[j][1] = 0;
                        solicitedSizes[j][0] = 0;
                    }
                    break;
                case 'S':
                    if(solicitedSizes[j][0])
                    {
                        satisfied++;
                        solicitedSizes[j][2] = 0;
                        solicitedSizes[j][1] = 0;
                        solicitedSizes[j][0] = 0;
                    }
                    break;
            }
    }

    cout << satisfied << "\n";

    delete[] jerseysSizes;
    delete[] solicitedSizes;

    return 0;
}
