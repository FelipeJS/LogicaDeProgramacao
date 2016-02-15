#include <iostream>

using namespace std;

int main()
{
    int qnt;
    cin >> qnt;
    bool flag = true ;
    while(qnt != 0){
        int numeros[qnt];
        if(!flag)
                cout << endl ;
        flag = false ;
        for(int i = 0; i < qnt; i++){
            cin >> numeros[i];
        }

        for(int i = 0; i < qnt; i++){
            for(int j = i+1; j < qnt; j++){
                for(int k = j+1; k < qnt; k++){
                    for(int l = k+1; l < qnt; l++){
                        for(int m = l+1; m < qnt; m++){
                            for(int n = m+1; n < qnt; n++){
                                cout << numeros[i] << " ";
                                cout << numeros[j] << " ";
                                cout << numeros[k] << " ";
                                cout << numeros[l] << " ";
                                cout << numeros[m] << " ";
                                cout << numeros[n] << endl;
                            }
                        }
                    }
                }
            }
        }

        cin >> qnt;
    }

    return 0;
}
