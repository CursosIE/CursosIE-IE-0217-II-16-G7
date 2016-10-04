
#include <cstdlib>
#include "ListaConArreglo.h"
using namespace std;

int main(int argc, char** argv) {

    Lista* L = new ListaConArreglo();

    L->imprimir();

    L->agregar(1.1);
    L->agregar(2.2);
    L->agregar(3.3);

    L->imprimir();

    L->eliminar(2.2);
    L->imprimir();

    L->agregar(2.2);
    L->eliminarK(0);
    L->imprimir();

    return 0;
}
