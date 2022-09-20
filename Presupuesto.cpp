#include "Presupuesto.h"

Presupuesto::Presupuesto() {}

Presupuesto::Presupuesto(Fecha fecha, string numero, Cliente cliente, DetalleComprobante detalle1,DetalleComprobante detalle2,DetalleComprobante detalle3,
                         Fecha fechaVencimiento) : Comprobante(fecha, numero, cliente, detalle1,detalle2,detalle3) {
    this->fechaVencimiento = fechaVencimiento;
    CalculoTotalPresupuesto();
    CalculoDeDiasTranscurridos();
}

Presupuesto::~Presupuesto() {}

void Presupuesto::AsingarFechaVencimiento() {
    this->fechaVencimiento = fechaVencimiento;

}

Fecha Presupuesto::ObtenerFechaVencimiento() {
    return this->fechaVencimiento;
}
int Presupuesto::ObtenerDiasTranscurridos() {
    return this->diasTranscurridos;
}

void Presupuesto::Mostrar() {
    cout << "------------------------------------" << endl;
    cout << "Presupuesto Nro: " << this->ObtenerNroComprobante() << endl;
    cout << "Fecha Presupuesto: ";
    this->ObtenerFechaComprobante().Mostrar();
    cout << "Fecha de vencimiento: ";
    this->fechaVencimiento.Mostrar();
    cout << "Dias Transcurridos: " << this->diasTranscurridos << endl;
    this->ObtenerDatosCliente().Mostrar();
    this->ObtenerLineaDeDetalle1().Mostrar();
    this->ObtenerLineaDeDetalle2().Mostrar();
    this->ObtenerLineaDeDetalle3().Mostrar();
    cout << "El total es: " << this->totalPresupuesto << endl;

}

void Presupuesto::CalculoTotalPresupuesto() {

    float suma = 0;
    float multiplicacion;

    multiplicacion = this->ObtenerLineaDeDetalle1().ObtenerPrecioUnitario() * this->ObtenerLineaDeDetalle1().ObtenerCantidadProd();
    suma += multiplicacion;
    multiplicacion = this->ObtenerLineaDeDetalle2().ObtenerPrecioUnitario() * this->ObtenerLineaDeDetalle2().ObtenerCantidadProd();
    suma += multiplicacion;
    multiplicacion = this->ObtenerLineaDeDetalle3().ObtenerPrecioUnitario() * this->ObtenerLineaDeDetalle3().ObtenerCantidadProd();
    suma += multiplicacion;
    this->totalPresupuesto = suma;

}

void Presupuesto::CalculoDeDiasTranscurridos() {

    int diasFechaInicio, diasFechaFin, diferencia;

    diasFechaInicio = (this->ObtenerFechaComprobante().ObtenerAAAA() * 365) +
                      ((this->ObtenerFechaComprobante().ObtenerMM() - 1) * 30) +
                      (this->ObtenerFechaComprobante().ObtenerDD());
    diasFechaFin = (this->ObtenerFechaVencimiento().ObtenerAAAA() * 365) +
                   ((this->ObtenerFechaVencimiento().ObtenerMM() - 1) * 30) +
                   (this->ObtenerFechaVencimiento().ObtenerDD());
    diferencia = diasFechaFin - diasFechaInicio;
    this->diasTranscurridos=diferencia;

}







