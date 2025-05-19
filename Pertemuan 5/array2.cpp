#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int matriks[2][2];
    cout<<"masukkan elemen matriks 2x2:\n";

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout<<"matriks["<<i<<"] ["<<j<<"]=";
            cin>>matriks[i][j];
    }
}
int det=(matriks[0][0]*matriks[1][1]-matriks[0][1]*matriks[1][0]);
cout<<"Determinan matriks="<<det<<"\n";
}
