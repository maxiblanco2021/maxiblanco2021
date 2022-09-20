//
// Created by Maxi Blanco on 10/9/2022.
//

#include "Comprobante.h"
#include <iostream>


Comprobante::Comprobante() {}

Comprobante::Comprobante(Fecha fecha, string numero, Cliente cliente, DetalleComprobante detalle1,DetalleComprobante detalle2,DetalleComprobante detalle3) {
    this->FechaComprobante = fecha;
    this->NroComprobante = numero;
    this->DatosCliente = cliente;
    this->LineaDeDetalle1 = detalle1;
    this->LineaDeDetalle2 = detalle2;
    this->LineaDeDetalle3 = detalle3;

}

Comprobante::~Comprobante() {}


Fecha Comprobante::ObtenerFechaComprobante() {
    return this->FechaComprobante;
}

string Comprobante::ObtenerNroComprobante() {
    return this->NroComprobante;
}

Cliente Comprobante::ObtenerDatosCliente() {
    return this->DatosCliente;
}

DetalleComprobante Comprobante::ObtenerLineaDeDetalle1() {
    return this->LineaDeDetalle1;
}
DetalleComprobante Comprobante::ObtenerLineaDeDetalle2() {
    return this->LineaDeDetalle2;
}
DetalleComprobante Comprobante::ObtenerLineaDeDetalle3() {
    return this->LineaDeDetalle3;
}

