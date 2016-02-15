#include <iostream>

using namespace std;

int main()
{
    int cm = 2, f = 1;
    bool teste = false;

    while(cm >= f && !teste){
        cout << "Hello world!" << endl;
        cm--;
    }

    return 0;
}
