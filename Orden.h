#include "Productos.h"
#include "Cliente.h"
#include <string>
using namespace std;
class Orden
{
    private:
        Productos productos;
        Cliente cliente;
        int importeTotal;
        string formaPago;
    public:
    void getshowOrden();

};