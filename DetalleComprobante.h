//
// Created by Maxi Blanco on 10/9/2022.
//

#ifndef EJERCICIO2_TP_DETALLECOMPROBANTE_H
#define EJERCICIO2_TP_DETALLECOMPROBANTE_H

#include <iostream>


using namespace std;

class DetalleComprobante {


private:

    int cantidadProducto;
    string detalle;
    float precioUnitario;
    float totalLinea;

public:

    DetalleComprobante();

    DetalleComprobante(int cant, string detalle, float precioUn);

    ~DetalleComprobante();

    //set

    void AsigCantidadProd(int cant);

    void AsigDetalle(string detalle);

    void AsigPrecioUnitario(float precio);

    void AsigTotalLinea();

    //get

    int ObtenerCantidadProd();

    string ObtenerDetalle();

    float ObtenerPrecioUnitario();

    float ObtenerTotalLinea();

    //Servicios

    void CaluloTotalLinea();

    void Mostrar();
};


#endif //EJERCICIO2_TP_DETALLECOMPROBANTE_H
