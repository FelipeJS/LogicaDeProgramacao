#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
                                //abcdefghijklmnopqrstuvwxyz
    const char nearestVowels[] = "aaaeeeeiiiiioooooouuuuuuuu";
                                //abcdefghijklmnopqrstuvwxyz
    const char nextConsonant[] = "bcdffghjjklmnppqrstvvwxyzz";                             
    
    for (int i = 0 ; i < str.size() ; i++)
    {
        int ascii = (int) str[i];
        if( ascii == 97 || ascii == 101  || ascii == 105 || ascii == 111 || ascii == 117) cout << str[i];
        else
        {
            cout << str[i];
            cout << nearestVowels[str[i] - 'a'];
            cout << nextConsonant[str[i] - 'a'];
        }
    }
    
    cout << "\n";
    
    return 0;
}
        
     
