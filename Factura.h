//
// Created by Maxi Blanco on 10/9/2022.
//

#ifndef EJERCICIO2_TP_FACTURA_H
#define EJERCICIO2_TP_FACTURA_H

#include "Comprobante.h"

class Factura : public Comprobante {

private:

    float porcentajeIVA{};
    float totalFactura{};


public:

    Factura();

    Factura(Fecha fecha, string numero, Cliente cliente, DetalleComprobante detalle1,DetalleComprobante detalle2,DetalleComprobante detalle3, float iva);

    ~Factura();

    //set

    void AsignarIVA(float iva);

    //get

    float ObtenerIva();

    //servicios

    float ObtenerTotalComprobante();

    void Mostrar();


};


#endif //EJERCICIO2_TP_FACTURA_H
