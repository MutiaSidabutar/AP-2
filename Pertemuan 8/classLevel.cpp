#include<iostream>

using namespace std;

class contohakses{
    private: //bisa diakses mahasiswa itu sendiri
        int privateVar;
    protected://class turunan ini yang bisa akses ke class protect
    int protectedVar;
    public://bisa diakses variable,dll
    int publicVar;
    //constructor
    contohakses(){
        privateVar =1;
        protectedVar =1;
        publicVar =1;
    }
    
    void tampilkanSemua() {
        cout<<"Akses dari dalam kelas:"<<endl;
        cout<<privateVar<<endl;
        cout<<protectedVar<<endl;
        cout<<publicVar<<endl;
    }
};

//kelas turunan
class turunan : public contohakses {
public:
void aksesProtected(){
    cout<<"Akses publicVar"<<publicVar<<endl;
    cout<<"Akses protectedVar"<<protectedVar<<endl;
}
};

int main(){
    contohakses obj;
    obj.tampilkanSemua();
cout<<"Akses dari luar class:"<<endl;
cout<<obj.publicVar <<endl;
// cout<<obj.privateVar<<endl;//eror
// cout<<obj.protectedVar<<endl;


turunan tur;
tur.aksesProtected();

}
