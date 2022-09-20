//
// Created by Maxi Blanco on 10/9/2022.
//

#ifndef EJERCICIO2_TP_PRESUPUESTO_H
#define EJERCICIO2_TP_PRESUPUESTO_H

#include "Comprobante.h"

class Presupuesto : public Comprobante {

private:

    Fecha fechaVencimiento;
    float totalPresupuesto;
    int diasTranscurridos;

public:

    Presupuesto();

    Presupuesto(Fecha fecha, string numero, Cliente cliente, DetalleComprobante detalle1,DetalleComprobante detalle2,DetalleComprobante detalle3, Fecha fechaVencimiento);

    ~Presupuesto();

    void AsingarFechaVencimiento();

    //void AsingarDiasTranscurridos(int dias);
    int ObtenerDiasTranscurridos ();
    Fecha ObtenerFechaVencimiento();


    void Mostrar();

    void CalculoDeDiasTranscurridos();

    void CalculoTotalPresupuesto();

};


#endif //EJERCICIO2_TP_PRESUPUESTO_H
