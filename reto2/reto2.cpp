#include<iostream>
#include<vector>
using namespace std;

vector<int> B;
vector<int> rotacion(vector<int> A, int C){

        for(int i=0; i<C; i++){
            B=A;

            for(int q=0; q<A.size(); q++){

                if(q==0){
                    A[q]=B[A.size()-1];
                }else{
                    A[q]=B[q-1];
                }
            }
        }
        return A;
    }

int main(){
    vector<int> a; // array original
    vector<int> b; // array copia
    int k, n, elem; // k es numero de rotaciones y n el numero de elementos del array
                    // elem; es el valor que tomará cada index del array original

    cout<<"Enter number of elements in array: "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter number value "<<i+1<<": ";
        cin>>elem;
       a.push_back(elem);
    }

    /*cout<<"Enter number of rotations: ";
    cin>>k;

    k=k%a.size(); // divide el numero de rotaciones entre el tamaño del array original 
                  // y usa el residuo como el número de rotaciones
    b=rotacion(a,k);
    
    cout<<"Your final array is: ";
    
    for(int i=0; i<a.size(); i++){
        cout<<b[i];
    }
    
    cout<<" rotated "<<k<<" times.";*/
}

