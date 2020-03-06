#include <iostream>
using namespace std;

int main(){
    int bin[50], n, i=0;
    int lgstGap;

    cout<<"Ingrese un numero: ";
    cin>>n;


   while(n>0) {
       bin[i]=n%2;
        i++;
        n=n/2;
   }



   cout<<"Numero binario: ";

   for(int k=i-1; k>=0; k--){
       cout<<bin[k];
   }

    return 0;

}