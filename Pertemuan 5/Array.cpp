#include <iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    system("CLS");
    //Array Declaration &inisialitation
    /* 2 cara membuat array*/

    // cara 1: array kosong
    // string nama[5];

    // nama[0]="alya";
    // nama[1]="parul";
    // nama[2]="Syukron";
    // nama[3]="Aurik";
    // nama[4]="Dzakwan";

    // cara 2: array yang langsung diisi
    // string nama [5]={"Alya","parul","Syukron","Aurik","Dzakwan"};
    // string nama []={"Alya","parul","Syukron","Aurik","Dzakwan"};
    
    // Ascending Element in Array
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // menggunakan looping
    // for (int i=0;i<5;i++){
    //     cout << nama[i]<<endl;
    // }

    //Decending Element in Array
    // for (int i=5;i>=1;i--){
    //     cout<<nama[i]<<endl;
    // }

        //Multidimensional Array
        // 1 3 5
        // 2 4 6 

        // int matrix[2][3]={{1, 3, 5},{2, 4, 6}};
        // for(int i=0;i<2; i++){
        //     for(int j=0;j<3;j++){
        //         cout<<matrix[i][j]<<" ";
        //     }
        //     cout<< endl;
        // }
        // int matriks [4][6]={{1,2,3,4,5,6},{6,5,4,3,2,1},{7,8,9,10,11,12},{7,6,5,4,3,8}};
        // for (int i=0;i<4;i++){
        //     cout<<matrix[i][j]<<"\t";
        // }
        // cout<<endl;

        // string(array of characters)
        // string nama="kiel";
        // // cout<<nama[0]<<endl;
        // // cout<< nama[2]<<endl;

        // for (int i=0; i< nama.length();i++){
        //     cout << nama[i]<<endl;
        // }
        string s1="hello";
        string s2="world";
        /*1. s1=s2*/
        // s1=s2;
        // cout <<"s1="<<s1<<endl;

    /* 2.s1=s1+s2*/
    s1="hello";//reset nilai di s1
    cout << "Hasil:"<<s1 + s2<<endl;

    // /*3. s1.length()*/
    // cout <<s1.length()<<endl;
    // cout <<(s1+s2).length()<<endl;

    /*4. s1.substr(n, m)*/
    // cout<<s1.substr(2, 3)<<endl;
    // cout <<(s1+s2).substr(5, 3)<<endl;

    // Operator sizeof
    // int angka =10;
    // cout<<sizeof(angka);
    // int nilai[]={10,20,30,40,50};
    // cout << sizeof(nilai);

    // string s ="Mutia";
    // cout <<sizeof(s);

    //Array libary
        // array<float,5> nilai ={87.5, 90, 100, 95.7, 78.3};
        // cout << "Nilai:";

        // // for (int i=0; i< nilai.size(); i++){
        // //     cout<< nilai[i]<<" ";
        
        // // }

        // for(float n:nilai){
        //     cout<<n<<" ";
        // }

    }

