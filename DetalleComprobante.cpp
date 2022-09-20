//
// Created by Maxi Blanco on 10/9/2022.
//

#include "DetalleComprobante.h"
#include <iomanip>

DetalleComprobante::DetalleComprobante() {}

DetalleComprobante::DetalleComprobante(int cant, string detalle, float precioUn) {

    this->cantidadProducto = cant;
    this->detalle = detalle;
    this->precioUnitario = precioUn;
    this->CaluloTotalLinea();
}

DetalleComprobante::~DetalleComprobante() {}


void DetalleComprobante::CaluloTotalLinea() {

    this->totalLinea = this->precioUnitario * this->cantidadProducto;

}


void DetalleComprobante::AsigCantidadProd(int cant) {
    this->cantidadProducto = cant;
}

void DetalleComprobante::AsigDetalle(string detalle) {
    this->detalle = detalle;
}

void DetalleComprobante::AsigPrecioUnitario(float precio) {
    this->precioUnitario = precio;
    this->CaluloTotalLinea();
}

void DetalleComprobante::AsigTotalLinea() {
    this->CaluloTotalLinea();
}

int DetalleComprobante::ObtenerCantidadProd() {
    return this->cantidadProducto;
}

string DetalleComprobante::ObtenerDetalle() {
    return this->detalle;
}

float DetalleComprobante::ObtenerPrecioUnitario() {
    return this->precioUnitario;
}

float DetalleComprobante::ObtenerTotalLinea() {
    return this->totalLinea;
}

void DetalleComprobante::Mostrar() {

    cout << "Cant     " << "Detalle      " << "Precio Unitario    " << "Subtotal" << endl;
    cout << this->cantidadProducto << "        " << this->detalle << "            " << this->precioUnitario
         << "            " << this->totalLinea << endl;

}




