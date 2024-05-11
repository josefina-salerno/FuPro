#include <iostream>
using namespace std;
int main(){
    int n, div=1,resto=0;
    cout<<"Ingrese un valor numérico"<<endl;
    cin>>n;
    do
    {
        if (n%div==0)
        resto++;
    } while (div<=n);
        if (resto==2){
        cout<<"Es primo";
    
    }
        else{
            cout<<"No es primo";
    }
    return 0;
}