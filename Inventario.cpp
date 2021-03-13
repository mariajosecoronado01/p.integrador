#include "Inventario.h"
#include <iostream>
using namespace std;

Inventario::Inventario(){
    productos=new Producto [100];
    cantidades= new int [100];
    prodReg=0;
    //int*array2= new int [100];
}

Inventario::Inventario(float * cants, Producto * prod, int pregistrado){
    cantidades=cants;
    producto=prod;
    prodReg=pregistrado;
}

int Inventario::buscarp(string n){
    for (int i=0; i<pregistrado; i++){
        if (producto[i]==n){
            return i;
        }
    }
}

void Inventario::agregarProducto(Producto p, int x){
    producto[prodReg]=p;
    cantidades[prodReg]=x;
    prodReg+=1;
    cout<<"Se agrego el producto "<<p.codigoProducto<<", y ahora hay un total de "<<prodReg<<" productos"<<endl;

}

void Inventario::modificarProducto(string n, int x){
    int i=buscarp(n);
    //buscarp(string n)=
    if (cantidades[i]>=x){
        cantidades[i]-=x;
    }
    else{
        cout<<"No hay suficientes productos para realizar la compra"<<endl;
    }
}

void Inventario::quitarProducto(Producto codprod){
    /*producto[prodReg]=p.buscarp(string n);
    cantidades[prodReg]=x;
    prodReg-=1;*/
    int x=buscarp(codprod.codigoProducto);
    prodReg=prodReg-1;
    for (int i=x; i<prodReg; i++){
        producto[i]=producto[i+1];
        cantidades[i]=cantidades[i+1];
    }
}