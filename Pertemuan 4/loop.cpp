#include<iostream>
using namespace std;

int main(){
    //goto label : penggabungan dari goto dan statement
    // hello world, fasilkom TI,Ilmu Komputer, IKLC
    //-> hello world, IKLC, ilmu komputer, fasilkom TI
    // a:
    //     cout<<"hello world"<<endl;
    //     goto d;
    // b:
    //     cout<<"Fasilkom TI"<<endl;
    //     return 0;
    // c:
    //     cout<<"Ilmu Komputer"<<endl;
    //     goto b;
    // d:
    //     cout<<"IKLC"<<endl;
    //     goto c;
        
    // menampilkan bilangan genap dari 10 ->2 dengan goto
//     int i=10;
// genap:
//     if(i%2==0){
//         cout<<i<<" ";

//     } i--;

//     if(i>=2){
//         goto genap;
//     }

//statement while : perulangan yang dilakukan sampai bernilai true
// int i =1;
// while(i<=10){
//     if (i % 2==0){
//         cout << i<<" ";

//     } i++;
// }

    //Statement Do while :perulangan yang dilakukan walupun nilai awal false
    // int i = 1;
    // do {
    //     cout << 1<< endl;
    // } while (1<=0);

    // statement for : perulangan yang dilakukan ketika sudah ditentukan batasnya
    // for (insialisasi, kondisi, increase)
    // for (int i=1; i<=10;i+=2){
    //     cout<< "Hello World"<<endl;
    // }

    //Nested for :perulangan yang dilakukan  untuk data dua dimensi atau matriks (2*2)
    //***** 5x5 
    // for(int i=1; i<=5; i++){
    //     for(int j=1; j<=5; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //segitiga siku-siku
    // for(int i=1; i<=5;i++){
    //     for (int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

}
