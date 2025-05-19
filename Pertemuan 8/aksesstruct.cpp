#include<iostream>
#include<string>
using namespace std;

struct mahasiswa{
    string nama;
    int umur;
    float ipk;
};
main(){

    mahasiswa mhs1;//mhs1 sebagai objek,mahasiswa jadi tipe

    mhs1.nama="mutia";
    mhs1.umur=18;
    mhs1.ipk=4.00;

//     cout<<"Nama="<<mhs1.nama<<endl;
//       cout<<"umur="<<mhs1.umur<<endl;
//         cout<<"IPK="<<mhs1.ipk<<endl;

mahasiswa *ptrmhs=&mhs1;
cout<<"Nama="<<ptrmhs->nama<<endl;
cout<<"umur="<<ptrmhs->umur<<endl;
cout<<"IPK="<<ptrmhs->ipk<<endl;


}