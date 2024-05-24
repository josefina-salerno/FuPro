#include <iostream>
using namespace std;
int main(){
    int x, choras, hextra, salario, salario2, maximo, minimo;
    int n, n2;
    n=0;
    n2=0;
    std::cout<<"Indique el costo por hora"<<endl;
    std::cin>>x;
    std::cout<<"Indique la cantidad de horas que trabajó"<<endl;
    std::cin>>choras;
    maximo=-1;
    minimo=900000000;
    for (int i = 0; i <=5; i++)
    {
        if (choras>40)
        {
            hextra=choras-40; 
            salario=(x*40)+(x*1.5*hextra);
            std::cout<<"Su salario es de: "<<salario<<endl;
            if (salario>maximo)
            {
                maximo=salario;
            }
            if (salario<minimo)
            {
                minimo=salario;
            }
            n=n+salario;
            
        }
        else{
            salario2=x*choras;
            std::cout<<"Su salario es de: "<<salario2<<endl;
            if (salario2>maximo)
            {
                maximo=salario2;
            }
            if (salario2<minimo)
            {
                minimo=salario2;
            }
            n2=n2+salario2;
        }
        std::cout<<"Indique el costo por hora"<<endl;
        std::cin>>x;
        std::cout<<"Indique la cantidad de horas que trabajó"<<endl;
        std::cin>>choras;
        
    }
    std::cout<<"El salario maximo es: "<<maximo<<endl;
    std::cout<<"El salario minimo es: "<<minimo<<endl;
    std::cout<<"El promedio es de: "<<(n2+n)/25<<endl;
    std::cout<<"El monto total que la empresa pagó es de: "<<n+n2<<endl;
    return 0;
}