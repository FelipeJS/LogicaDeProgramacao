#include <bits/stdc++.h>
using namespace std;

struct Amigo{
    int idAmigo=0;
    int respondido=1;
    int espera_total=0;
};

int main(){
    int M; //numero de entradas
    char charEntrada[20]; //chars de entrada
    Amigo amigos[101]; //amigos pela ID
    list<int> idAmigos;  //lista de IDs dos amigos
    list<int> idsSemResposta; //lista de IDs sem resposta
    int wait1sec=0; //boolean monitora se devera add 1 sec

    cin >> M;

    //leitura dos dados
    for(int i=0; i<M; i++){
        char chTemp;
        int idTemp;

        cin >> chTemp >> idTemp;

        charEntrada[i] = chTemp;

        //verifica se aquele 1 segundo nao impresso precisa ser adicionado a amigos nao respondidos
        if(i>0)
        {
            if( (charEntrada[i] != 'W') && (charEntrada[i-1] != 'W') )
                wait1sec = 1;
            else
                wait1sec = 0;
        }

        //add 1 s a todos os ids sem resposta
        if(wait1sec == 1)
        {
            for (int j = 0; j < idsSemResposta; j++)
            {
                   amigos[j].espera_total++;
            }
        }

        switch(chTemp){
            case 'R':
                idAmigos.push_back(idTemp);
                idAmigos.unique();

                idsSemResposta.push_back(idTemp);
                amigos[idTemp].respondido = 0;
                break;
            case 'S':
                idsSemResposta.remove(idTemp);
                amigos[idTemp].respondido = 1;
                break;
            case 'W':
                for (int j : idsSemResposta)
                {
                   amigos[j].espera_total += idTemp;
                }
                break;
        }
    }

    //verifica amigos que terminaram sem resposta e adiciona tempo total como -1;
    for(int i : idsSemResposta)
    {
        amigos[i].espera_total = -1;
    }

    //impressao dos resultados
    idAmigos.sort();
    idAmigos.unique();
    for(int i : idAmigos)
    {
        cout << i << " " << amigos[i].espera_total << endl;
    }

    return 0;
}

