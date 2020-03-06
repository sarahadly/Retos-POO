#include<iostream>
using namespace std;
#include<math.h>

int minjumps(int X, int Y, int D){

    int diff=(Y-X)/2;
    ceil(diff);
    
    return diff;
}

int main(){

    int x, y, d;
    int resultado;

    cout<<"Enter initial point: ";
    cin>>x;

    cout<<"Enter final point: ";
    cin>>y;

    cout<<"Enter jump distance: ";
    cin>>d;

    resultado=minjumps(x,y,d);

    cout<<"The minimal amount of jumps needed is: "<<resultado;
}

// hay que buscar una función que redondee el numero de saltos si éste es un decimal