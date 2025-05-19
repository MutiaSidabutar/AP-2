#include<iostream>//header untuk C++
#include<conio.h>
using namespace std;

int main(){
string nama;
char Kom, jenis_kelamin;
int nim;
float ip;
    /*ini untuk komen beberapa garis*/
    
cout<<"hello world\n";
cout<<"masukkan nama anda:";
getline(cin,nama);//menmapilkan satu baris penuh
cout<<"masukkan KOM anda:\n";
cin>>Kom;
cout<<"masukkan NIM:\n";
cin>>nim;
cout<<"masukkan IP:\n";
cin>> ip;
cout<<"masukkan jenis kelamin(L/P):";
jenis_kelamin=getche();//agar karakter langsung tampil tanpa nekan enter
/*untuk output*/
cout<<nama<<endl;
cout<<Kom<<endl;
cout<<nim<<endl;
cout<<ip<<endl;
putchar(jenis_kelamin);//untuk menampilkan karakter
getch();// karakter yang diketik ga ditampilkan dilayar disimpan didalam memori
}