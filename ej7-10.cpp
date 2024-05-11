#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese un número"<<endl;
    cin>>n;
    cout<<"Elija la opción a para ver la lista creciente, o b para decreciente."<<endl;
    string letra;
    cin>>letra;
    if (letra=="a")
    {
        if (n%2==0){
        for (int i=0;i<=n;i=i+2){
            cout<<i<<endl;
        }
    }  
    if (n%2!=0)
    {
        n=n-1;
        for (int i = 0; i <= n ; i=i+2)
        {
            cout<<i<<endl;
        }
        
    } 
    }
    if (letra=="b")
    {
        if (n%2==0){
        for (int i=n;i>0;i=i-2){
            cout<<i<<endl;
        }
    }  
    if (n%2!=0) {
        n=n-1;
        for (int i=n; i>0 ; i=i-2)
        {
            cout<<i<<endl;
        }
        
    } 
    }
    
    
    return 0;
}