#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Escriba un valor numérico"<<endl;
    cin>>num;

    cout<<"Elija la opcion"<<endl;
    cout<<"a-Ingresar nuevo dato"<<endl;
    cout<<"b-Calcular el doble del dato"<<endl;
    cout<<"c-Determinar si es par"<<endl;
    cout<<"d-Determinar si es primo"<<endl;
    cout<<"e-Salir"<<endl;
    string opcion;
    cin>>opcion;
    if (opcion=="a")
    {
        cout<<"Ingrese un valor numérico"<<endl;
        int dato;
        cin>>dato;
    }
    if (opcion=="b")
    {
        num=num*2;
        cout<<"El nuevo número es:"<<num;
    }
    if (opcion=="c")
    {
        if (num%2==0)
        {
            cout<<"Es par"<<endl;
        }
        else{
            cout<<"No es par"<<endl;
        }
        
    }
    

    return 0;
}