#include<iostream>
using namespace std;
int main()
{
    int a,b;
    system("CLS");
    //assigment operator
    a=3;
    b=5;
    //Aritmathical operator
    
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

//relation operator
// cout<<(a==b)<<endl;
// cout<<(a<b)<<endl;
// cout<<(a<=b)<<endl;
// cout<<(a>b)<<endl;
// cout<<(a>=b)<<endl;
// cout<<(a!=b)<<endl;

//logical operator(&,||,!)
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

//bitwise operator(&,|,^,~,>>,<<)-->biner
cout<<(5&7)<<endl;
cout<<(5|7)<<endl;
cout<<(5^7)<<endl;
cout<<(~7)<<endl;
cout<<(7>>2)<<endl;
cout<<(7<<2)<<endl;

//shorthand
a+=7;//a=a+7;
cout<<a<<endl;
a-=7;//a=a-7;
cout<<a<<endl;
a^=7;//a=a^7;
cout<<a<<endl;
a/=7;//a=a/7;
cout<<a<<endl;

//increament,Decrament
pre increament
cout<<a<<endl;
cout<<++a<<endl;

cout<<b<<endl;
cout<<++b<<endl;

//post increament
cout<<a<<endl;
cout<<a++<<endl;
cout<<a<<endl;

cout<<b<<endl;
cout<<b++<<endl;
cout<<b<<endl;

//pre decreament

cout<<a<<endl;
cout<<--a<endl;
cout<<b<<endl;
cout<<--b<<endl;
//post decreament
cout<<a<<endl;
cout<<a--<<endl;
cout<<a<<endl;

cout<<b<<endl;
cout<<b--<<endl;
cout<<b<<endl;


}