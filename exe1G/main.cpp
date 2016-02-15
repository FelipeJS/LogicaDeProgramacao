#include <iostream>

using namespace std;

int main()
{
    int qntCamisas, qntJogadores;
	cin >> qntCamisas >> qntJogadores;
	int tabela[qntCamisas+1];

	for(int i = 1; i <= qntCamisas; i++){
        tabela[i] = 0;
	}

	for(int i = 0; i < qntJogadores; i++)
	{
		int camisa;
		cin >> camisa;

		int contador = 0, auxiliar = 1;
		for(int j = 1; j <= qntCamisas; j++)
		{
			if(!tabela[j])
			{
				contador++;
				if( auxiliar * camisa == contador)
				{
					auxiliar++;
					tabela[j] = 1;
				}
			}
		}
	}

	for(int i = 1; i <= qntCamisas; i++){
        if(!tabela[i]){
            cout << i << endl;
        }
	}

    return 0;
}
