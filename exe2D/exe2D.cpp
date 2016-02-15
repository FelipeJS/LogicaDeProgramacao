#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    (a==b&&b==c)&&a+b+c==180?cout<<"Equilateral"<<endl:
    a==b||b==c||a==c&&a+b+c==180?cout<<"Isosceles"<<endl:
    a+b+c==180?cout<<"Scalene"<<endl:cout<<"Error"<<endl;
    return 0;
}
