#include <iostream>
using namespace std;
int main(){
int U=0;
int TotalMinas=0;
cout<<"Por favor ingrese cantidad de minas que quisiera tener : ";
cin>>U;
int Minas[U];
for (int i = 0; i < U; i++)
{
    cout<<"ingrese las minas[1] o no minas[0]\n "<<i;
    cin>> Minas[i];
    TotalMinas=TotalMinas+Minas[i];
}
cout<<"las minas totales son: "<<TotalMinas;
}