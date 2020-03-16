#include<iostream>
using namespace std;
#include<vector>
#include <bits/stdc++.h>

int solution(vector <int> A){
    sort(A.begin(), A.end());

    for(int i=0; i<A.size(); i++){
        cout<<A[i];
    }

    return 0;
}

int main(){

    int falt, largo, numar;
    vector<int> A;
    
    falt = solution(A);
    
    cout<<"Choose Array size: ";
    cin>>largo;
    
    for(int i=largo; i<largo; i++){
        cout<<"Enter value of index "<<i;
        cin>>numar;
        A.push_back(x);
    }
    
    largo=largo+1;
    
    cout<<"\nEl número faltante es: "<<falt<<endl;



}