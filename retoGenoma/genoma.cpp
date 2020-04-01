//Seuencia de ADN: string de A,C,G y T (N caracteres)
//Se quiere saber el factor de impacto mínimo
//Hay M consultas que están en los array P y Q (P<=Q)
//K es la k-ésima consulta
//la función debe retornar los valores de las consultas

//Pseudocódigo;
//1. Inicializar la secuencia ADN: S= CAGCCTA
//2. Inicializar arrays P y Q (con M consultas) P=[2,5,0] y Q=[4,5,6]
//3. Hacer un for que se repta N veces
    //3.1 Seleccionar parte del array que inicia en P[k] y termina en Q[k]: GCC
    //3.2 Darle valores a las letras A,C,G y T: 1,2,3,4 respectivamente --> [2,1,3,2,2,4,1]
    //3.3 Retornar el valor mínimo del array --> meterlo en el array de salida  (resultado:[2])


#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> solution(string S, vector<int> P, vector<int> Q){
    int M=P.size(); //Número de consultas

    vector<int> resultado;

    //Paso 3:
    for(int k=0; k<M; k++){
         vector<int> frag; //Fragmento de la secuencia frag va dentro del for
        //Paso 3.1 y 3.2

        for(int i=P[k]; i<=Q[k]; i++){
            if(S[i]=='A'){
                frag.push_back(1);
            }
            if(S[i]=='C'){
                frag.push_back(2);
            }
            if(S[i]=='G'){
                frag.push_back(3);
            }
            if(S[i]=='T'){
                frag.push_back(4);
            }
        }

        resultado.push_back(*min_element(frag.begin(), frag.end()));
    }
    return resultado;
}

int main(){
    // Paso 1:
    string S= "CAGCCTA";

   //Paso 2:
   vector<int> P{2,5,0};
   vector<int> Q{4,5,6};
   vector<int> res;

   res=solution(S,P,Q);



   //Llamar a la función:
    for(int i=0; i<res.size(); i++){
      cout<<res[i];
    }

  cout<<endl;
}