#include<iostream>
using namespace std;
int main(){
int cantF=0;
cout<<"Por favor ingrese cantidad de frutas";
cin>>cantF;
string frutas[cantF];
for (int i = 0; i < cantF; i++)
{
    cout<<"ingrese la fruta en la posicion"<<i;
    cin>>frutas[i];
}
for (int i = 0; i < cantF; i++)
{
    cout<<"las frutas son: "<<frutas[i];
}

}