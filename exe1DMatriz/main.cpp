#include <iostream>
#define TAMANHO 100
using namespace std;

typedef struct{
      int codigo;
      bool espera;
      int posicao[TAMANHO];
}AMIGO;

void iniciaAmigo(AMIGO &p, int codigo){
    p.codigo = codigo;
    p.espera = false;
    p.posicao[codigo] = 0;
}

void adicionaListaDeEspera(AMIGO &p){
    p.espera = true;
}

void retiraListaDeEspera(AMIGO &p){
    p.espera = false;
}

void adicionaTempoEspera(AMIGO &p, int tempo){
    p.posicao[p.codigo] = tempo;
}

bool estaNalistaDeEspera(AMIGO &p){
    return p.espera;
}

void amigoNaoRespondido(AMIGO &p){
     p.posicao[p.codigo] = -1;
}

int main()
{
    int qntDeMensagens, codAmigo;
    cin >> qntDeMensagens;
    char operacao;

    for(int i = 0; i < qntDeMensagens; i++){
        cin >> operacao >> codAmigo;
        AMIGO p;
        iniciaAmigo(p, codAmigo);

        switch(operacao){
            case 'R':
                for(int i = 0; i < TAMANHO; i++){
                    if(p.posicao[i] == ){
                        adicionaTempoEspera(p, 1);
                    }
                }
        }

    }

    return 0;
}
