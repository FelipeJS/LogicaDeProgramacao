#include <iostream>
#define TAMANHO 100000

using namespace std;

typedef struct{
    int topo;
    int item[TAMANHO];
}PILHA;

int tamanhoDaPilha(PILHA &p){
    return p.topo;
}

void iniciaPilha(PILHA &p){
    p.topo = -1;
}

bool pilhaVazia(PILHA p){
    if(p.topo == -1 )
        return true;
    elseempilhar(s, numeroTemp);
        return false;
}

bool pilhaCheia(PILHA p){
    if (p.topo == TAMANHO-1)
        return true;
    else
        return false;
}

void empilhar(PILHA &p, int x){
    p.item[++p.topo] = x;
}

int desempilhar(PILHA &p){
    return (p.item[p.topo--]);
}

int main()
{
    int quantidade, numeroTemp, soma = 0;
    cin >> quantidade;

    PILHA s;
    iniciaPilha(s);

    for(int i = 0; i < quantidade; i++){
        cin >> numeroTemp;

        if(numeroTemp > 0){
            if(!pilhaCheia(s)){
                empilhar(s, numeroTemp);
                soma += numeroTemp;
            }
        }
        else{
            if(!pilhaVazia(s)){
                soma -= desempilhar(s);
            }
        }
    }

    cout << soma << endl;
    return 0;
}
