#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Ingrese un valor numérico"<<endl;
    cin>>x;
    if (x%2==0)
    {
        cout<<"Es par"<<endl;
    }
    else{
        cout<<"No es par"<<endl;
    }

    if (x%5==0 && x%3==0)
    {
        cout<<"Es multiplo de 3 y 5"<<endl;
    }
    else{
        cout<<"No es multiplo de 3 y 5"<<endl;
    }
    
    return 0;
}