//
// Created by Maxi Blanco on 10/9/2022.
//

#ifndef EJERCICIO2_TP_COMPROBANTE_H
#define EJERCICIO2_TP_COMPROBANTE_H

#include <string>
#include "Fecha.h"
#include "Cliente.h"
#include "DetalleComprobante.h"

using namespace std;


class Comprobante {


private:
    Fecha FechaComprobante;
    string NroComprobante;
    Cliente DatosCliente;
    DetalleComprobante LineaDeDetalle1;
    DetalleComprobante LineaDeDetalle2;
    DetalleComprobante LineaDeDetalle3;


public:
    // Consturctor

    Comprobante();

    Comprobante(Fecha fecha, string numero, Cliente cliente, DetalleComprobante detalle1,DetalleComprobante detalle2,DetalleComprobante detalle3);


    //Destructor

    ~Comprobante();

    //GET

    Fecha ObtenerFechaComprobante();

    string ObtenerNroComprobante();

    Cliente ObtenerDatosCliente();

    DetalleComprobante ObtenerLineaDeDetalle1();
    DetalleComprobante ObtenerLineaDeDetalle2();
    DetalleComprobante ObtenerLineaDeDetalle3();


    virtual void Mostrar() = 0;
};

#endif //EJERCICIO2_TP_COMPROBANTE_H
