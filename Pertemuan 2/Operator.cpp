#include<iostream>
using namespace std;
int main()
{
    int a,b;
    system("CLS");
    //assigment operator :simbol yang digunakan dalam pemograman untuk memberi nilai (assign) kesebuah variabel.
)    
    a=3;
    b=5;
    //Aritmathical operator : operator yang digunakan untuk melakukan operasi matematika dasar dalam pemograman, seperti TAKUBAGI
    
    int tambah=a+b;
    int kurang=a-b;
    int kali=a*b;
    float bagi=(float)a/(float)b;
    int modulo=a%b;
    cout<<"hasil penjumlahan="<<tambah<<endl;
    cout<<"hasil pengurangan="<<kurang<<endl;
    cout<<"hasil perkalian="<<kali<<endl;
    cout<<"hasil pembagian="<<bagi<<endl;
    cout<<"hasil sisa bagi="<<modulo<<endl;

//relation operator : membandingkan dua nilai  hasilnya adalah true or false
// cout<<(a==b)<<endl;
// cout<<(a<b)<<endl;
// cout<<(a<=b)<<endl;
// cout<<(a>b)<<endl;
// cout<<(a>=b)<<endl;
// cout<<(a!=b)<<endl;

//logical operator(&,||,!) : menggabungkan dua atau lebih ekspresi kondisi dan mengahasilkan nilai 1 atau 0
cout<<(true&&true)<<endl;
cout<<(true&&false)<<endl;
cout<<(false&&true)<<endl;
cout<<(false&&false)<<endl;

cout<<(true||true)<<endl;
cout<<(true||false)<<endl;
cout<<(false||true)<<endl;
cout<<(false||false)<<endl;

cout<<!true<<endl;
cout<<!false<<endl;

//bitwise operator(&,|,^,~,>>,<<)-->biner : operator yang berkerja langsung pada bit(biner) dari data.
cout<<(5&7)<<endl;
cout<<(5|7)<<endl;
cout<<(5^7)<<endl;
cout<<(~7)<<endl;
cout<<(7>>2)<<endl;
cout<<(7<<2)<<endl;

//shorthand : menggabungkan operasi aritmatika atau bitwise dengan assigment.
a+=7;//a=a+7;
cout<<a<<endl;
a-=7;//a=a-7;
cout<<a<<endl;
a^=7;//a=a^7;
cout<<a<<endl;
a/=7;//a=a/7;
cout<<a<<endl;

//increament,Decrament :menambah dan mengurangi nilai
pre increament
cout<<a<<endl;
cout<<++a<<endl;

cout<<b<<endl;
cout<<++b<<endl;

//post increament pakai dulu, tambah
cout<<a<<endl;
cout<<a++<<endl;
cout<<a<<endl;

cout<<b<<endl;
cout<<b++<<endl;
cout<<b<<endl;

//pre decreament kurangi dulu, pakai

cout<<a<<endl;
cout<<--a<endl;
cout<<b<<endl;
cout<<--b<<endl;
//post decreament pakai dulu, kurangi
cout<<a<<endl;
cout<<a--<<endl;
cout<<a<<endl;

cout<<b<<endl;
cout<<b--<<endl;
cout<<b<<endl;


}
