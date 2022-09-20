//
// Created by Maxi Blanco on 10/9/2022.
//

#include "Factura.h"
#include "Fecha.h"

Factura::Factura() {}

Factura::~Factura() {};

Factura::Factura(Fecha fecha, string numero, Cliente cliente, DetalleComprobante detalle1,DetalleComprobante detalle2,DetalleComprobante detalle3, float iva) : Comprobante(
        fecha, numero, cliente, detalle1,detalle2,detalle3) {
    this->porcentajeIVA = iva;
    this->totalFactura = ObtenerTotalComprobante();
}


void Factura::AsignarIVA(float iva) {
    this->porcentajeIVA = iva;
}

float Factura::ObtenerIva() {
    return this->porcentajeIVA;
}

float Factura::ObtenerTotalComprobante() {

    float suma = 0;
    float multiplicacion;
    float montoiva;
    int tamDetalle;

    multiplicacion = this->ObtenerLineaDeDetalle1().ObtenerPrecioUnitario() * this->ObtenerLineaDeDetalle1().ObtenerCantidadProd();
    suma += multiplicacion;
    multiplicacion = this->ObtenerLineaDeDetalle2().ObtenerPrecioUnitario() * this->ObtenerLineaDeDetalle2().ObtenerCantidadProd();
    suma += multiplicacion;
    multiplicacion = this->ObtenerLineaDeDetalle3().ObtenerPrecioUnitario() * this->ObtenerLineaDeDetalle3().ObtenerCantidadProd();
    suma += multiplicacion;

    montoiva = suma * this->porcentajeIVA;
    suma += montoiva;
    return suma;
}

void Factura::Mostrar() {
    cout << "------------------------------------" << endl;
    cout << "Factura Nro: " << this->ObtenerNroComprobante() << endl;
    cout << "Fecha Factura: ";
    this->ObtenerFechaComprobante().Mostrar();
    this->ObtenerDatosCliente().Mostrar();
    this->ObtenerLineaDeDetalle1().Mostrar();
    this->ObtenerLineaDeDetalle2().Mostrar();
    this->ObtenerLineaDeDetalle3().Mostrar();
    cout << "El porcentaje de IVA Aplicado es: " << this->porcentajeIVA << endl;
    cout << "El total es: " << this->totalFactura << endl;

}




