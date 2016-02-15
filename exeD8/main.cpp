#include <bits/stdc++.h>

using namespace std;

int main()
{
    int linha[100];
    int coluna[100];
    int l, c;
    map<string,int> mapa;
    cin >> l >> c;

    string matriz[l][c];

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            cin >> matriz[i][j];
        }
        cin >> linha[i];
    }

    for(int i = 0; i < c; i++){
        cin >> coluna[i];
    }

    while(true){
        bool flag = false;
        int posicao = -1;
        string s;

        for(int i = 0; i < l; i++){
            flag = false;
            s = "";

            for(int j = 0; j < c; j++){
                if(s == "" && matriz[i][j] != "*"){
                    s = matriz[i][j];
                }else{
                    if(matriz[i][j] != "*" && matriz[i][j] != s){
                        flag = true;
                        break;
                    }
                }
            }

            if(flag == false && s != ""){
                int contador = 0;
                for(int k = 0; k < c; k++){
                    if(matriz[i][k] != "*"){
                        contador++;
                    }
                }
                mapa[s] = linha[i] / contador;
                posicao = i;
                break;
            }
        }

        if(posicao == -1){
            //s = "";
            for(int i = 0; i < c; i++){
                flag = false;
                s = "";

                for(int j = 0; j < l; j++){
                    if(s == "" && matriz[j][i] != "*"){
                        s = matriz[j][i];
                    }else{
                        if(matriz[j][i] != "*" && matriz[j][i] != s ){
                            flag = true;
                            break;
                        }
                    }
                }

                if(flag == false && s != ""){
                    int contador = 0;
                    for(int k = 0; k < l; k++){
                        if(matriz[k][i] != "*"){
                            contador++;
                        }
                    }
                    mapa[s] = coluna[i] / contador;
                    posicao = i;
                    break;
                }
            }
        }

        if(posicao == -1){
            break;
        }

        for(int i = 0; i < l; i++){
            for(int j = 0; j < c; j++){
                if(matriz[i][j] != "*" && matriz[i][j] == s){
                    matriz[i][j] = "*";
                    linha[i] -= mapa[s];
                    coluna[j] -= mapa[s];
                }
            }
        }
    }

    for(map<string,int>::iterator m = mapa.begin(); m != mapa.end(); m++){
        cout << m->first << " " << m->second << endl;
    }

    return 0;
}
