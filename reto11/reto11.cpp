//Caso general:
//Tres enteros A, B y K
//Se retorna el número de enteros en el rango [A...B] que son divisibles entre K

/*A y B son enteros dentro del rango [0..2,000,000,000];
K es un entero dentro del rango [1..2,000,000,000];
A ≤ B*/

//Caso particular:
//Tres enteros A=6, B=11 y K=2
//{i: 6<=i<=11, i mod 2 = 0}
//{6,8,10} >> cumplen con la condición del problema
// entonces debe retornar 3 pq es el número de casos en los cuales i es divisible entre K

//Pseudocódigo

    //1. inicializar las variables A, B y K
    //2. Crear una variable contador que empiece en 0
    //3. for(inicia en A, i<=B, i++)
        //3.1 si es divisible entre cero >>
            //3.1.1 contador aumenta
    //4. retornar

#include<iostream>
#include<vector>
using namespace std;

int solution(int A, int B, int K){
    //Paso 2
    int cont=0;

    //Paso 3
    for(int i=A; i<=B; i++){
        //Paso 3.1
        if(i%K==0){
        cont=cont+1; // 3.1.1 contador aumenta
        }
    }

    return cont;
}

int main(){

    int A, B, K;
    int res;

    cout<< "Captura el valor de A, parce"<<endl;
    cin>> A;

    cout<< "Captura el valor de B, parce"<<endl;
    cin>> B;

    cout<< "Captura el valor de K, parce"<<endl;
    cin>> K;

    res=solution(A, B, K);

    cout<< "Número de casos: " << res << endl;

}