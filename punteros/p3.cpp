#include <iostream>
using namespace std;

int main()
{
    int A = 1;
    int B = 2;
    int C = 3;
    int *P1 = &A;
    int *P2 = &C;
    P1 = &A;
    P2 = &C;
    *P1 = (*P2)++;
    P1 = P2;
    P2 = &B;
    *P1 -= *P2;
    ++*P2;
    *P1 *= *P2;
    A = ++*P2 * *P1;
    P1 = &A;
    *P2 = *P1 /= *P2;
    cout << "A: " << A << endl;
    cout << "B: " << B << endl;
    cout << "C: " << C << endl;
    cout << "p1: " << *P1 << endl;
    cout << "p2: " << *P2 << endl;
    return 0;
}
