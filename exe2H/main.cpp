#include <iostream>
using namespace std;

int main()
{
    int qnt;
    cin >> qnt;
    string aluno[qnt];
    string parceiro[qnt];

    for(int i = 0; i < qnt; i++){
        cin >> aluno[i];
    }

    for(int i = 0; i < qnt; i++){
        cin >> parceiro[i];
    }

    int resultado = 0;
    for(int i = 0; i < qnt; i++){
        for(int j = 0; j < qnt; j++){
            if(aluno[i] == parceiro[j] && aluno[i] != parceiro[i]){
                if(aluno[j] == parceiro[i]){
                    resultado++;
                    break;
                }
            }
        }
    }

    if(resultado == qnt){
        cout << "good" << endl;
    }else{
        cout << "bad" << endl;
    }

    return 0;
}
