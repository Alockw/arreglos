#include <iostream>
#include <vector>
using namespace std;
int main(){
    string  Triqui[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            cout<<"ponga si + o - si es su turno";
            cin>>Triqui[i][j];
        }
    }
    for (int m = 0; m < 3; m++)
    {
        for (int k = 0; k < 3; k++)
        {
            cout<<Triqui[m][k];
        }
        cout<<"\n";
    } 
    return 0;
}