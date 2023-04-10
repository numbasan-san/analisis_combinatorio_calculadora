
#include <iostream>
#include <cmath>
using namespace std;
#include "funciones.h"


void combinacionSR(char *datos, int n, int r, int y = 0, int i = 0, int *indexs = NULL){
    if(indexs==NULL){
        indexs = new int[r];
    }
    if (i < r){
        for (int x = y; x < n; x++){
            indexs[i] = x;
            combinacionSR(datos, n, r, x + 1, i + 1, indexs);
        }
    } else {
        cout<<"\n\t";
        for(int w = 0; w < r; w++){
            cout<<datos[indexs[w]];
        }
    }
}

void combinacionCR(char *datos, int n, int r, int y = 0, int i = 0, int *indexs = NULL){
    if(indexs==NULL){
        indexs = new int[r];
    }
    if (i < r){
        for (int x = y; x < n; x++){
            indexs[i] = x;
            combinacionSR(datos, n, r, x, i + 1, indexs);
        }
    } else {
        cout<<"\n\t";
        for(int w = 0; w < r; w++){
            cout<<datos[indexs[w]];
        }
    }
}

void variacionCR(char *datos, int n, int r, int i = 0, int *indexs = NULL){
    if(indexs==NULL){
        indexs = new int[r];
    }
    if (i < r){
        for (int x = 0; x < n; x++){
            indexs[i] = x;
            variacionCR(datos, n, r, i + 1, indexs);
        }
    } else {
        cout<<"\n\t";
        for(int w = 0; w < r; w++){
            cout<<datos[indexs[w]];
        }
    }
}

int main(){
    char items[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int n, r, q;

    cout<<"\n N:";
    cin>>n;

    cout<<" R:";
    cin>>r;

    cout<<"==================COMBINACION SIN REPETICION==================";
    combinacionCR(items, n, r);

	cin<<q;

    return 0;
}
