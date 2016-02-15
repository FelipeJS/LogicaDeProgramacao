#include <iostream>

using namespace std;

int main()
{
    int quantidade;
    cin>>quantidade;
    int matriz[quantidade+1][2];
    matriz[quantidade][0] = 100;
    matriz[quantidade][1] = 100;

    for(int i = 0; i < quantidade; i++){
        for(int j = 0; j < 2; j++){
            cin >> matriz[i][j];
        }

        if(matriz[i][0] > matriz[i][1]){
            matriz[quantidade][1] -= matriz[i][0];
        }else if(matriz[i][0] < matriz[i][1]){
            matriz[quantidade][0] -= matriz[i][1];
        }
    }

    cout << matriz[quantidade][0] << endl;
    cout << matriz[quantidade][1] << endl;
    return 0;
}
