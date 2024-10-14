#include <iostream>
using namespace std;
int main()
{
int a=10;
int b=11;
int d;
try
{
    if(b==0)
    {
        throw 404;
    }
    d=a/b;
}
catch(...)
{
    cout<<"error infinity";
}
cout<<d;

return 0;
}