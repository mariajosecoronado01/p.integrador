#include "Orden.h"
#include <iostream>
#include <string>
using namespace std;

Orden::Orden(Inventario inv, Cliente c, float  total, string fpago){
    inventario=inv;
    cliente=c;
    importeTotal=total;
    formaPago=fpago;
}

void Orden::getshowOrden(){
    cout<<"INVENTARIO:"<<inventario.producto->nombreProducto<<inventario.producto->precioCompra<<inventario.producto->precioVenta<<
 
}


