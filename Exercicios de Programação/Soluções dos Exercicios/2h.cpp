#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    string temp;
    vector<string> names;
    vector<string> names2;
    vector<string>::iterator it;
    bool bad = false;

    cin >> N;

    for(int i=0;i<N;i++)
    {
        cin >> temp;
        names.push_back(temp);
    }
    for(int i=0;i<N;i++)
    {
        cin >> temp;
        names2.push_back(temp);
    }

    for(it=names.begin(); it != names.end(); it++)
    {
        int pos1 = it - names.begin();
        int pos2 = find(names2.begin(),names2.end(),*it) - names2.begin();
        if(names.at(pos2) != names2.at(pos1))
            bad = true;
        if(pos1 == pos2)
            bad = true;
    }

    if(bad == true)
        cout << "bad" << endl;
    else
        cout << "good" << endl;
}
