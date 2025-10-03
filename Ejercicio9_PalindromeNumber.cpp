#include <iostream>
using namespace std; 

int main(){
    
    bool a;
    int i=1;
    int j=0;
    int n;
    cout<<"De cuantos digitos es tu numero: ";
    cin>>n;
    int x[n];
    while(i<=n){
        cout<<"ingresa tu digito "<<i<<": ";
        cin>>x[j];
        i++;
        j++;
    }
}