#include <iostream>
using namespace std;

int main(){
    int d,m;

    cin >> m;
    cin >> d;

    int num = d + 31*(m-1);

    if(num < 49) cout << "Before";
    else if(num == 49) cout << "Special";
        else cout << "After";

    cout << "\n";

    return 0;
}
