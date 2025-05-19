#include <iostream>
using namespace std;

int main() {
    system("CLS");
    int matriks1[2][2];
    int matriks2[2][2];
    int hasilTambah[2][2];
    int hasilKali[2][2] = {0};

   
    cout << "\nMatriks 1" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> matriks1[i][j];
        }
    }

    cout << "\nMatriks 2" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i+1 << " kolom " << j+1 << ": ";
            cin >> matriks2[i][j];
        }
    }

   
    cout << "\nHasil Penjumlahan Matriks:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasilTambah[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasilTambah[i][j] << "\t";
        }
        cout << endl;
    }

  
    cout << "\nHasil Perkalian Matriks:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasilKali[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                hasilKali[i][j] += matriks1[i][k] * matriks2[k][j];
            }
            cout << hasilKali[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
