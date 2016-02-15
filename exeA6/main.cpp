#include <iostream>
#define TAMANHO 1000

using namespace std;

typedef struct{
    int topo;
    int item[TAMANHO];
}PILHA;

void empilhar(PILHA &s, int x){
    s.item[++s.topo] = x;
}

int desempilhar(PILHA &s){
    return (s.item[s.topo--]);
}

int main()
{
    int qntNecessaria, qntAmigos, qntSelos;
    cin >> qntNecessaria >> qntAmigos;
    PILHA s, tmp;
    s.topo = -1;
    tmp.topo = -1;

    for(int i = 0; i < qntAmigos; i++){
        cin >> qntSelos;

        for(int j = s.topo; j > -1; j--){
            if(qntSelos > s.item[s.topo]){
                int x = desempilhar(s);
                empilhar(tmp, x);
            }
        }

        empilhar(s,qntSelos);

        for(int k = tmp.topo; k > -1; k--){
                int x = desempilhar(tmp);
                empilhar(s, x);
        }
    }

    int soma = 0, contador = 0;

    for(int i = 0; i < qntAmigos; i++ ){
        if(soma < qntNecessaria){
            contador++;
            soma += s.item[i];
        }
    }

    if(soma < qntNecessaria){
        cout << "Impossivel" << endl;
    }else{
        cout << contador << endl;
    }
    return 0;
}
