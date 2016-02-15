#include <iostream>

using namespace std;

bool triangulo(int a, int b, int c){
    int moduloAB, moduloAC, moduloBC;

    a-b >= 0 ? moduloAB = a-b : moduloAB = -(a-b);
    a-c >= 0 ? moduloAC = a-c : moduloAC = -(a-c);
    b-c >= 0 ? moduloBC = b-c : moduloBC = -(b-c);

    if((moduloBC < a) && (a < b+c))
        return true;
    else if((moduloAC < b) && (b < a+c))
        return true;
    else if((moduloAB < c) && (c < a+b))
        return true;
    else
        return false;
}

int main()
{
    int ladoA, ladoB, ladoC, ladoD;
    cin >> ladoA >> ladoB >> ladoC >> ladoD;

     if(triangulo(ladoA,ladoB,ladoC))
        cout << "S" << endl;
else if(triangulo(ladoA,ladoB,ladoD))
        cout << "S" << endl;
else if(triangulo(ladoB,ladoC,ladoD))
        cout << "S" << endl;
else if(triangulo(ladoB,ladoC,ladoA))
        cout << "S" << endl;
else if(triangulo(ladoC,ladoD,ladoA))
        cout << "S" << endl;
else if(triangulo(ladoC,ladoD,ladoB))
        cout << "S" << endl;
else
        cout << "N" << endl;

return 0;
}
