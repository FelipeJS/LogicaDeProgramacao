#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    long double n, p, resultado = 0, nMenosP, auxP, auxN;
    cin >> n >> p;

    while(n != 0){
        nMenosP = n-p;
        auxN = 1;
        auxP = 1;

        for (int i = n; i > max(p,nMenosP); i--){
            auxN *= i;
        }

        for (int i = 2; i <= min(p,nMenosP); i++){
            auxP *= i;
        }

        resultado = auxN / auxP;
        cout << fixed << setprecision(0) << resultado << endl;

        cin >> n >> p;
    }
    return 0;
}

