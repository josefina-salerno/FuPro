#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Escriba un valor numérico"<<endl;
    cin>>n;
    bool es_primo = true;
    for (int i=2;i<n;i++)
    {
        if (n%i==0)
        {
            es_primo=false;
        }
        
    }
    if (es_primo)
    {
        cout<<"Es primo"<<endl;
    }
    else{
        cout<<"No es primo"<<endl;
    }
    
    cout<<2<<endl;
    int d=3, c=1;
    do
    {
        bool es_primo1 = true;
        for (int i=2;i<=sqrt(d);i++)
    {
        if (d%i==0)
        {
            es_primo1=false;
            break;
        }
        
    }
    if (es_primo1)
    {
        cout<<d<<endl;
        ++c;
    }
    d+=2;
    } while (c<1000);
    
    
    return 0;
}