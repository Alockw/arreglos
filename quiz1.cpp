//dos ejercicio
//1)crear dos vectores de n catidad de numeros que el usuario diligencie sumar los numeros totales de  cada vector comparar sus valores totales
//2)crear un vector de n posiciones simulando el juego de buscaminas alfinal mostrar cuantas minas hay 
#include <iostream>
using namespace std;
int main(){
int U=0;
int C=0;
int TotalNumeros1=0;
int TotalNumeros2=0;
cout<<"Por favor ingrese cantidad de numeros del primer vector: ";
cin>>U;
cout<<"Por favor ingrese cantidad de numeros del segundo vector: ";
cin>>C;
int Numero1[U];
int Numero2[C];
for (int i = 0; i < U; i++)
{
    cout<<"ingrese los numeros del vector 1 \n "<<i;
    cin>>Numero1[i];
    TotalNumeros1=TotalNumeros1+Numero1[i];
}
cout<<"los valores totales de los numeros del vector 1 son:\n"<< TotalNumeros1;
for (int j = 0; j < C; j++)
{
    cout<<"ingrese los numeros del vector 2 \n "<<j;
    cin>> Numero2[j];
    TotalNumeros2=TotalNumeros2+Numero2[j];}
cout<<"el valor de el vector 2 es: \n"<< TotalNumeros2<<"";
if (TotalNumeros1==TotalNumeros2){
    cout<<"son iguales"<<endl;
}
else{
    cout<<"no son iguales"<<endl;
}
return 0;
}