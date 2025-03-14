#include <iostream>
using namespace std;
int main(){
    const float phi=3.14;
    float r,luas,volume;
    cout<<"masukkan jari jari: ";
    cin>>r;
    
    luas=4*phi*r*r;
    volume=(float)4/3*phi*r*r*r;
    cout<<"luas  : "<<luas<<endl;

   cout<<"volume:"<<volume<<endl;
   
}