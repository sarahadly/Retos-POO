#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int N, vector<int> A){
     vector<int>cont;

      for(int i=0;i<N;i++){
        cont.push_back(0);
    }

      for(int k=0;k<A.size();k++){
          if(A[k]<=N){
            cont[A[k]-1]++;
         }
         else
         {
             if (A[k]=N+1){

             }
         }
        }
     return cont;
}
int main()
{
     int numel;
     int vari;
     int N;
     vector<int> res;
     cout <<"Ingrese cantidad de contadores: ";
     cin>>N;
     
     cout<<"brother inserte cantidad de datos: ";
     cin>>numel;
     
     vector<int> A;
     for(int i=0;i<numel;i++){
        cout<<"parcero inserte el numero"<<i+1<< ": ";
        cin>>vari;
        A.push_back(vari);
    }
    res = solution(N,A);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<< *max_element(A.begin(), A.end())<<",";
    }
}