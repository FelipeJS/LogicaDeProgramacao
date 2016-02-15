#include <iostream>

using namespace std;

int main()
{

    int qntRounds, qntAmigos;
    cin>>qntAmigos;
    int lista[qntAmigos+1];
    cin>>qntRounds;

    for(int i = 1; i <= qntAmigos; i++){
        lista[i] = 0;
    }


    for(int i = 0; i < qntRounds; i++){
        int round;
        cin>>round;

        for(int j = 1; j <= qntAmigos; j++){
            if(j * round == 0){
                lista[j] = 0;
            }
        }
    }

    for(int i = 1; i <= qntAmigos; i++){
        if(lista[i] != 0)cout << lista[i] << endl;
    }
    return 0;
}
