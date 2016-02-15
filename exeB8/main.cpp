#include <iostream>

using namespace std;

int main()
{
    int qntAlunos;
    cin >> qntAlunos;

    string nomes[qntAlunos];
    string parceiros[qntAlunos];

    for(int i = 0; i < qntAlunos; i++){
        cin >> nomes[i];
    }

    for(int i = 0; i < qntAlunos; i++){
        cin >> parceiros[i];

        if(parceiros[i] == nomes[i]){
            cout << "bad" << endl;
            break;
        }
        if(i == qntAlunos-1){
            cout << "good" << endl;
            break;
        }
    }

    return 0;
}
