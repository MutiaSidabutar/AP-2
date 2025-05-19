#include<iostream>//kalau dibalekkan kata nya sama cth: katak,ini termasuk kategori
#include<string.h>
using namespace std;
main(){
    system("cls");
    char kata[25];
    int i,j;
    cout<<"masukkan kata yang anda inginkan:";
    cin>>kata;
    i=0;
    j=strlen(kata);
    while((i<=j)&&(kata[i]==kata[j-1])){
        i++;
        j--;

    }
    if(i>j){
        cout<<kata<<"termasuk kategori";

    }
    else{
        cout<<kata<<"tidak termasuk kategori";

    }
    system("pause");
}