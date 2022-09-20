
#include "Comprobante.h"
#include "Factura.h"
#include "Presupuesto.h"


using namespace std;

int main() {


    Fecha fechaPresupuesto1(15, 4, 2022);
    Fecha fechaVenPres1(6, 5, 2022);

    Cliente client1("Maxi", "Blanco", 34143211, 262266666, "Migeltes 560");

    DetalleComprobante detalle1(5, "REMERAS", 5.75);
    DetalleComprobante detalle2(2, "PANTALONES", 20.33);
    DetalleComprobante detalle3(10, "GORRAS", 3.15);

    Presupuesto pres1(fechaPresupuesto1, "66678", client1, detalle1,detalle2,detalle3, fechaVenPres1);

    pres1.Mostrar();

    if (pres1.ObtenerDiasTranscurridos() < 30){
        Fecha fechFact1 = fechaVenPres1;
        cout << "------------------------------------" << endl;
        Factura factur1(fechFact1, "0005-887994", client1, detalle1, detalle2, detalle3, 0.21);
        factur1.Mostrar();
    }else{
        cout << "------------------------------------" << endl;
        cout << "El presupuesto vencio. Debe solicitar un nuevo Presupuesto" << endl;
    }

    Fecha fechaPres2(1, 3, 2022);
    Fecha fechaVenPres2(25, 5, 2022);

    Presupuesto pres2 (fechaPres2, "4545-9879", client1, detalle1, detalle2, detalle3, fechaVenPres2);
    pres2.Mostrar();

    if (pres2.ObtenerDiasTranscurridos() < 30){
        cout << "------------------------------------" << endl;
        Factura factur2(fechaPres2, "0005-88711111", client1, detalle1, detalle2, detalle3, 0.21);
        factur2.Mostrar();
    }else{
        cout << "------------------------------------" << endl;
        cout << "El presupuesto vencio. Debe solicitar un nuevo Presupuesto" << endl;
    }


    return 0;
}
