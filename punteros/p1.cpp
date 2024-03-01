#include <iostream>
using namespace std;
int main()
{
    int x;
    int *p1=NULL; 
    int *p2=NULL;
    x = 15;
    p1 = &x;
    p2 = p1;
    cout << "valor de  x: " << x << endl;
    cout << "valor del puntero p1: " << *p1 << endl;
    cout << "valor del puntero p2: " << *p2 << endl;
return 0;
}