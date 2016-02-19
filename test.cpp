#include <iostream>
using namespace std;
int main()
{
    char a,b;
    cin>>a>>b;
    char *p=&a;
    char *q=&b;
    char t;
    t=*p;
    *p=*q;
    *q=t;
    cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<(int*)p<<'\t'<<(int*)q;
    return 0;
}