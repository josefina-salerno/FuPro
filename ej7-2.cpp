#include <iostream>
using namespace std;
int main(){
    float m, n, x, c, z;
    int p, q;
    float c1,c2,c3;

    cout<<"Ingrese un valor numérico para n y m"<<endl;
    cin>>n>>m;
    c1= m/n;
    cout<<"El cociente entre m y n es: "<<c1<<endl;

    cout<<"Ingrese los valores para p y q"<<endl;
    cin>>p>>q;
    c2=p%q;
    cout<<"El resto entre p y q es: "<<c2<<endl;;

    cout<<"Ingrese el valor de x: "<<endl;
    cin>>x;
    x++;
    cout<<"X incrementado en 1 es: "<<x<<endl;

    cout<<"Ingrese un valor para c: "<<endl;
    cin>>c;
    c3=c+x;
    cout<<"X incrementado en c es: "<<c3<<endl;

    cout<<"Ingrese un valor para z"<<endl;
    cin>>z;
    z--;
    cout<<"El valor que precede a z es: "<<z<<endl;
    return 0;
}