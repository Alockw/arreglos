#include <iostream>
#include <vector>
using namespace std;
int main(){
    string  Triqui[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            cout<<"ponga si 1 o 0 si es su turno";
            cin>>Triqui[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<Triqui[i][j];
            }
            cout<<"\n";
        }
    return 0;
}