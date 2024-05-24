#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float r, P, A;
    cout<<"Ingrese el radio de la circunferencia"<<endl;
    cin>>r;
    P=2*3.1416*r;
    A=3.1416*(pow(r,2));
    cout<<"El perímetro de la circunferencia de radio "<<r<<" es: "<<P<<endl;
    cout<<"El área de la circunferencia de radio "<<r<<" es: "<<A<<endl;
    return 0;
}