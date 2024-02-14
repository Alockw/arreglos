#include <iostream>
#include <vector>
using namespace std;
int main(){
    int i=0;
    int j=0;
    cout<<"Cuantas columnas de opciones de comida quieres\n"<<endl;
    cin>>j;
    cout<<"Cuantas filas de opciones de comida quieres\n"<<endl;
    cin>>i;
    string Maquina[i][j];
    for (int y = 0; y<i; y++)
    {
        for (int x = 0; x<j; x++)
        {
            cout<<"ingrese nombre y costo de su producto\n"<<endl;
            cin >> Maquina[y][x];
        }
        for (int y = 0; y < i; y++)
        {
            for (int x = 0; x < j; x++)
            {
                cout<<Maquina[y][x];
            }
            cout<<"\n";
        }
        
    }
    
}