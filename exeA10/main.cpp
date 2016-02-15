#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cintura, pescoco, socos;
    cin >> cintura >> pescoco >> socos;

    int count = 0;
    for(int i = 0; i < socos; i++){
        int soco;
        cin >> soco;

        if(soco >= cintura && soco <= pescoco){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
