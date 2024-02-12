#include <iostream>
using namespace std;
int main(){//parametro
//declaracion e inicializacion 
string names[5]={"Gabriela","Juan","Ivan","Laura","Samuel"};//entre{porque son cadenas de caracteres y son valores}//se diferencia por tamaños y corchetes
//impresion de vector
//cout << names[0];
//cout << names[1];
//cout << names[2];
//cout << names[3];
//para que la persona añada a el arreglo los nombres 
string names2[5]={};
for (int j = 0; j<5; j++){
    cout<<"porfavor ingrese los nombres"<<endl;
    cin>> names2[j];
}
for (int i = 0; i < 5; i++)
{
    cout<<names2[i]<<endl;
}

//el ciclo va a mostrar primero los valores por orden hastsa que llegue a el valor de este
//for (int i = 0; i < names->length(); i++)
//{
//   cout<<names[i];
//}
return 0;
}
