#include <iostream>
using namespace std;
int main (){
    int fechan,fechav, añon, añov;
    cout<<"Ingrese su fecha de nacimiento en formato ddmmaaaa"<<endl;
    cin>>fechan;
    cout<<"Ingrese la fecha de votación en formato ddmmaaaa"<<endl;
    cin>>fechav;
    añon=fechan%10000;
    añov=fechav%10000;

    if (añov-añon>=18)
    {
        cout<<"El estudiante votará"<<endl;
    }
    else{
        cout<<"El estudiante no votará"<<endl;
    }
    

    return 0;
}